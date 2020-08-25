#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_DEFAULT_REPORTER "multiprocess"
#include "Catch/single_include/catch2/catch.hpp"

#include "conduit/Source.hpp"
#include "conduit/ImplSpec.hpp"
#include "distributed/MultiprocessReporter.hpp"
#include "distributed/MPIGuard.hpp"

const uit::MPIGuard guard;

TEST_CASE("Test Source") {

  // TODO flesh out stub test
  uit::Source<uit::ImplSpec<char>> source;
  source.get<0>();

  auto& [outlet] = source;

}