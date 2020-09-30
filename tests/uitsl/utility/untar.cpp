#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/debug/compare_files.hpp"
#include "uitsl/utility/untar.hpp"

TEST_CASE("untar") {

  FILE* file = fopen("assets/rick.tar", "r");

  uitsl::untar(file, "assets/rick.tar");

  REQUIRE( uitsl::compare_files( "assets/rick.txt", "rick.txt" ) );

}
