#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/debug/compare_files.hpp"

TEST_CASE("compare_files copy") {

  REQUIRE(
    uitsl::compare_files( "assets/dali.txt", "assets/dali-copy.txt" )
  );

  REQUIRE(
    uitsl::compare_files( "assets/wiley.txt", "assets/wiley-copy.txt" )
  );

}


TEST_CASE("compare_files symlink") {

  REQUIRE(
    uitsl::compare_files( "assets/dali.txt", "assets/dali.txt.symlink" )
  );

  REQUIRE(
    uitsl::compare_files( "assets/wiley.txt", "assets/wiley.txt.symlink" )
  );

}

TEST_CASE("compare_files same file") {

  REQUIRE(
    uitsl::compare_files( "assets/dali.txt", "assets/dali.txt" )
  );

  REQUIRE(
    uitsl::compare_files( "assets/wiley.txt", "assets/wiley.txt" )
  );

}


TEST_CASE("compare_files same symlink") {

  REQUIRE(
    uitsl::compare_files( "assets/dali.txt.symlink", "assets/dali.txt.symlink" )
  );

  REQUIRE(
    uitsl::compare_files("assets/wiley.txt.symlink", "assets/wiley.txt.symlink")
  );

}


TEST_CASE("compare_files different files") {

  REQUIRE(
    ! uitsl::compare_files( "assets/dali.txt", "assets/wiley.txt" )
  );

  REQUIRE(
    ! uitsl::compare_files( "assets/wiley.txt", "assets/dali.txt" )
  );

}


TEST_CASE("compare_files different file and symlink") {

  REQUIRE(
    ! uitsl::compare_files( "assets/dali.txt", "assets/wiley.txt.symlink" )
  );

  REQUIRE(
    ! uitsl::compare_files( "assets/wiley.txt.symlink", "assets/dali.txt" )
  );

}
