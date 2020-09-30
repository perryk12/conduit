#pragma once
#ifndef UITSL_UTILITY_UNTAR_HPP_INCLUDE
#define UITSL_UTILITY_UNTAR_HPP_INCLUDE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <string>
#include <fstream>
#include <streambuf>

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

/// Parse an octal number, ignoring leading and trailing nonsense.
static int parseoct(const char *p, size_t n) {
	int i = 0;

	while ((*p < '0' || *p > '7') && n > 0) {
		++p;
		--n;
	}
	while (*p >= '0' && *p <= '7' && n > 0) {
		i *= 8;
		i += *p - '0';
		++p;
		--n;
	}
	return (i);
}

/// Returns true if this is 512 zero bytes.
static int is_end_of_archive(const char *p) {
	int n;
	for (n = 511; n >= 0; --n)
		if (p[n] != '\0')
			return (0);
	return (1);
}

/* Create a directory, including parent directories as necessary. */
static void create_dir(const char *pathname, int mode) {
	std::error_code ec;

  std::filesystem::create_directories(pathname, ec);

	if (ec) fprintf(stderr, "Could not create directory %s\n", pathname);
}

/* Create a file, including parent directory as necessary. */
static FILE* create_file(char *pathname_in, int mode){

  const auto longlink_path = std::filesystem::path("@LongLink");
  std::string pathname(pathname_in);

  if (
    // if this pathname_in isn't @LongLink...
    longlink_path != std::filesystem::path(pathname_in)
    // ... and there exists an @LongLink file
    && std::filesystem::exists(longlink_path)
  ) {

    std::cout << " @LongLink detected" << std::endl;
    std::cout << " Renaming " << pathname_in << " to @LongLink contents";
    std::cout << std::endl;

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
		create_dir(
      std::filesystem::path(pathname).parent_path().c_str(),
      0755
    );
		f = fopen(pathname.c_str(), "wb+");
  }

	return (f);
}

/* Verify the tar checksum. */
static int verify_checksum(const char *p) {
	int n, u = 0;
	for (n = 0; n < 512; ++n) {
		if (n < 148 || n > 155)
			/* Standard tar checksum adds unsigned bytes. */
			u += ((unsigned char *)p)[n];
		else
			u += 0x20;

	}
	return (u == parseoct(p + 148, 8));
}

/* Extract 512 bytes of a tar file */
static bool untar_chunk(FILE* source, const std::string filename) {

	FILE *f = nullptr;

	char buff[512];

	size_t bytes_read{ fread(buff, 1, 512, source) };

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

	// end of file
	if ( is_end_of_archive(buff) ) return false;

	if ( !verify_checksum(buff) ) {
		emp::NotifyError( "Checksum failure" );
		throw( "Checksum failure" );
	}

	int filesize{ parseoct(buff + 124, 12) };

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
		create_dir(buff, parseoct(buff + 100, 8));
		filesize = 0;
		break;
	case '6':
		 // Ignoring FIFO
		break;
	default:
		// Extracting file
		f = create_file(buff, parseoct(buff + 100, 8));
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
			fclose(f);
			f = nullptr;
		}

		filesize -= bytes_read;

	}

	if (f != nullptr) {
		fclose(f);
		f = nullptr;
	}

	return true;

}

/* Extract a tar archive. */
static void untar(const std::string filename) {

	FILE *source = fopen(filename.c_str(), "r");

	while ( untar_chunk( source, filename ) );

}

} // namespace uitsl

#endif // #ifndef UITSL_UTILITY_UNTAR_HPP_INCLUDE
