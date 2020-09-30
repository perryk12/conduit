#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/debug/compare_files.hpp"
#include "uitsl/utility/untar.hpp"

TEST_CASE("untar file") {

  //REQUIRE(
    uitsl::untar( "assets/rick.tar" );
  //);

  REQUIRE( uitsl::compare_files( "assets/rick.txt", "rick.txt" ) );

}

TEST_CASE("untar nested directory") {

  //REQUIRE(
    uitsl::untar( "assets/nested.tar" );
  //);

  REQUIRE( uitsl::compare_files(
    "assets/rick.txt", "never/gonna/let/you/down/rick.txt"
  ) );

}

TEST_CASE("untar empty directory") {

  //REQUIRE(
    uitsl::untar( "assets/empty.tar" );
  //);

  REQUIRE( std::filesystem::exists( "empty/also_empty" ) );

}

// TODO longlink test
