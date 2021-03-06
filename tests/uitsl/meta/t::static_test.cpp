#include <array>
#include <string>
#include <vector>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"
#include "cereal/include/cereal/types/string.hpp"
#include "cereal/include/cereal/types/vector.hpp"

#include "uitsl/meta/t::static_test.hpp"

TEST_CASE("Test valid types") {

  REQUIRE( uitsl::t::static_test<std::array<double, 3>>() );

  REQUIRE( uitsl::t::static_test<int>() );

  REQUIRE( uitsl::t::static_test<long>() );

}

TEST_CASE("Test invalid types") {

  REQUIRE( !uitsl::t::static_test<std::vector<int>>() );

  REQUIRE( !uitsl::t::static_test<std::string>() );

}
