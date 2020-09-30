#pragma once
#ifndef UITSL_UTILITY_UNTAR_HPP_INCLUDE
#define UITSL_UTILITY_UNTAR_HPP_INCLUDE

#include <algorithm>
#include <charconv>
#include <fstream>
#include <streambuf>
#include <string>
#include <string_view>

#include "../../../third-party/Empirical/source/base/errors.h"
#include "../../../third-party/Empirical/source/tools/string_utils.h"

#include "uitsl/polyfill/filesystem.hpp"

namespace uitsl {

/*
 * Adapted from https://github.com/libarchive/libarchive/blob/master/contrib/untar.c
 *
 * Written by Tim Kientzle, March 2009.
 *
 * Released into the public domain.
 */

namespace internal {

// alias verbose namespace
namespace stdfs = std::filesystem;

/// Parse an octal number, ignoring leading and trailing nonsense.
/// Parse an octal number, ignoring leading and trailing nonsense.
unsigned int parseoct( const std::string_view view ) {
	unsigned int res;
	std::from_chars( std::begin(view), std::end(view), res, 8 );
	return res;
}

/// Returns true if this is 512 zero bytes.
bool is_end_of_archive( const std::string_view buff_view ) {
	return std::all_of(
		std::begin(buff_view),
		std::end(buff_view),
		[](const char val){ return val == '\0'; }
	);
}

/// Verify the tar checksum.
/// @return true on success, false on failure
bool verify_checksum( const std::string_view buff_view ) {

	// standard tar checksum adds unsigned bytes
	const unsigned char* uptr{ reinterpret_cast<const unsigned char*>(
		buff_view.data()
	) };

	return std::accumulate(
		uptr,
		uptr + 148,
		0ul
	) + std::accumulate(
		uptr + 156,
		uptr + 512,
		0ul
	) + 0x20 * (156 - 148) == parseoct( buff_view.substr(148, 8) );

}

/// @return true on success, false on failure
bool try_set_perms( const stdfs::path& path, const stdfs::perms mode ) {

	std::error_code err;

	stdfs::permissions(path, mode, err);

	if ( err ) {
		emp::NotifyError( emp::to_string(
			"setting permissions for ", path, " failed with error code ", err
		) );
		return false;
	} else return true;

}

/// Create a directory, including parent directories as necessary.
/// @return true on success, false on failure
bool try_mkdir( const stdfs::path& path, const stdfs::perms mode ) {

	std::error_code err;

  stdfs::create_directories(path, err);
	if ( err ) {
		emp::NotifyError( emp::to_string(
			"creating directory ", path, " failed with error code ", err
		) );
		return false; // failure
	}

	return try_set_perms( path, mode ); // success if set perms succeeds

}

/* Create a file, including parent directory as necessary. */
static FILE* create_file(char *pathname_in, const stdfs::perms mode){

  const auto longlink_path = std::filesystem::path("@LongLink");
  std::string pathname(pathname_in);

  if (
    // if this pathname_in isn't @LongLink...
    longlink_path != std::filesystem::path(pathname_in)
    // ... and there exists an @LongLink file
    && std::filesystem::exists(longlink_path)
  ) {

    // then set the pathname to the contents of @LongLink...
    std::ifstream longlink_stream(longlink_path);
    pathname = std::string(
      std::istreambuf_iterator<char>(longlink_stream),
      std::istreambuf_iterator<char>()
    );
    // ... and delete the @LongLink file
    std::filesystem::remove(longlink_path);
  }

	FILE *f;
	f = fopen(pathname.c_str(), "wb+");
	if (f == nullptr) {
		/* Try creating parent dir and then creating file. */
		try_mkdir(
      std::filesystem::path(pathname).parent_path().c_str(),
      stdfs::perms{ 0755 }
    );
		f = fopen(pathname.c_str(), "wb+");
  }

	return (f);
}

/// Extract 512 bytes of a tar file.
static bool untar_chunk(FILE* source, const std::string filename) {

	FILE *f = nullptr;

	char buff[512];
	const std::string_view buff_view{ buff, 512 };

	size_t bytes_read{ fread(buff, 1, 512, source) };

	if (bytes_read < 512) {
		const std::string message{ emp::to_string(
			"Short read on ", filename,
			": expected 512, got ", bytes_read
		) };
		emp::NotifyError( message );
		throw( message );
	}

	// end of file
	if ( is_end_of_archive(buff_view) ) return false;

	if ( !verify_checksum(buff_view) ) {
		emp::NotifyError( "Checksum failure" );
		throw( "Checksum failure" );
	}

	size_t filesize{ parseoct({buff + 124, 12}) };

	const auto perms{ stdfs::perms{ parseoct({buff + 100, 8}) } };

	switch (buff[156]) {
	case '1':
		// Ignoring hardlink
		break;
	case '2':
		// Ignoring symlink
		break;
	case '3':
		// Ignoring character device
		break;
	case '4':
		// Ignoring block device
		break;
	case '5':
		// Extracting dir
		try_mkdir(buff, perms );
		filesize = 0;
		break;
	case '6':
		 // Ignoring FIFO
		break;
	default:
		// Extracting file
		f = create_file(buff, perms );
		break;
	}

	while (filesize > 0) {
		bytes_read = fread(buff, 1, 512, source);

		if (bytes_read < 512) {
			const std::string message{ emp::to_string(
				"Short read on ",
				filename,
				": expected 512, got ",
				bytes_read
			) };
			emp::NotifyError( message );
			throw( message );
		}

		if (filesize < 512) bytes_read = filesize;

		if (f != nullptr && fwrite(buff, 1, bytes_read, f) != bytes_read) {
			emp::NotifyError( "Failed write" );
			throw( "Failed write" );
			std::fclose(f);
			f = nullptr;
		}

		filesize -= bytes_read;

	}

	if (f != nullptr) {
		std::fclose(f);
		f = nullptr;
	}

	return true;

}

} // namespace internal

/* Extract a tar archive. */
static void untar(const std::string filename) {

	FILE *source = std::fopen(filename.c_str(), "r");

	while ( internal::untar_chunk( source, filename ) );

}

} // namespace uitsl

#endif // #ifndef UITSL_UTILITY_UNTAR_HPP_INCLUDE
