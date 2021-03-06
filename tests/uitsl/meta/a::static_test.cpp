#include <memory>
#include <string>
#include <vector>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"
#include "cereal/include/cereal/types/string.hpp"
#include "cereal/include/cereal/types/vector.hpp"

#include "uitsl/meta/a::static_test.hpp"

TEST_CASE("Test good types") {

  REQUIRE( uitsl::a::static_test<double>() );

  REQUIRE( uitsl::a::static_test<int>() );

  REQUIRE( uitsl::a::static_test<std::string>() );

  REQUIRE( uitsl::a::static_test<std::vector<double>>() );

  REQUIRE( uitsl::a::static_test<std::vector<int>>() );

  REQUIRE( uitsl::a::static_test<std::vector<std::string>>() );


}

TEST_CASE("Test bad types") {

  REQUIRE( uitsl::a::static_test<std::unique_ptr<int>>() );

}
