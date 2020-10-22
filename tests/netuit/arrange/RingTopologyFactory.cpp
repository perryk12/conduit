#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "netuit/arrange/RingTopologyFactory.hpp"

#include "NetworkXTester.hpp"

TEST_CASE("Test RingTopologyFactory") {
  REQUIRE(test_all_adj(netuit::RingTopologyFactory{}));
}
