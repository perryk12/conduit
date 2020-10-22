#include <sstream>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/debug/compare_streams.hpp"

TEST_CASE("compare_streams same") {

  std::stringstream first;
  std::stringstream second;

  first << "abc123";
  second << "abc123";

  REQUIRE( uitsl::compare_streams( first, second ) );

}

TEST_CASE("compare_streams different content") {

  std::stringstream first;
  std::stringstream second;

  first << "abc123";
  second << "xyz789";

  REQUIRE( !uitsl::compare_streams( first, second ) );

}

TEST_CASE("compare_streams different lengths") {

  std::stringstream first;
  std::stringstream second;

  first << "abc123";
  second << "x9";

  REQUIRE( !uitsl::compare_streams( first, second ) );

}
