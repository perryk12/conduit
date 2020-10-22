#include <fstream>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "netuit/arrange/ToroidalTopologyFactory.hpp"

#include "NetworkXTester.hpp"

TEST_CASE("Test ToroidalTopologyFactory") {
  REQUIRE(test_all_adj(netuit::ToroidalTopologyFactory{}));
}
