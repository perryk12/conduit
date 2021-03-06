#include <string>
#include <tuple>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/meta/tuple_index.hpp"

TEST_CASE("Test tuple_index") {

  using target = std::tuple<int, double, std::string, int>;

  REQUIRE( uitsl::tuple_index<int, target>::value  == 0 );

  REQUIRE( uitsl::tuple_index<double, target>::value == 1 );

  REQUIRE( uitsl::tuple_index<std::string, target>::value == 2 );

}
