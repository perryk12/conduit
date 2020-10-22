#include <ratio>
#include <set>
#include <thread>

#include <mpi.h>

#define CATCH_CONFIG_DEFAULT_REPORTER "multiprocess"
#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "Empirical/source/base/vector.h"

#include "netuit/assign/AssignAvailableProcs.hpp"
#include "uitsl/debug/MultiprocessReporter.hpp"
#include "uitsl/distributed/RdmaWindowManager.hpp"
#include "uitsl/math/math_utils.hpp"
#include "uitsl/mpi/MpiGuard.hpp"
#include "uitsl/mpi/mpi_utils.hpp"
#include "uitsl/nonce/CircularIndex.hpp"

#include "uit/fixtures/Sink.hpp"
#include "uit/fixtures/Source.hpp"
#include "uit/setup/ImplSpec.hpp"

#include "netuit/arrange/DyadicTopologyFactory.hpp"
#include "netuit/arrange/ProConTopologyFactory.hpp"
#include "netuit/arrange/RingTopologyFactory.hpp"
#include "netuit/mesh/Mesh.hpp"
#include "netuit/mesh/MeshNodeInput.hpp"
#include "netuit/mesh/MeshNodeOutput.hpp"

const uitsl::MpiGuard guard;

using MSG_T = emp::vector<int>;
using Spec = uit::ImplSpec<MSG_T, ImplSel>;

#define REPEAT for (size_t rep = 0; rep < std::deca::num; ++rep)

decltype(auto) make_dyadic_bundle() {

  netuit::Mesh<Spec> mesh{
    netuit::DyadicTopologyFactory{}(uitsl::get_nprocs()),
    uitsl::AssignIntegrated<uitsl::thread_id_t>{},
    netuit::AssignAvailableProcs{}
  };

  auto bundles = mesh.GetSubmesh();
  REQUIRE( bundles.size() == 1 );

  return std::tuple{ bundles[0].GetInput(0), bundles[0].GetOutput(0) };

};

decltype(auto) make_producer_consumer_bundle() {

  netuit::Mesh<Spec> mesh{
    netuit::ProConTopologyFactory{}(uitsl::get_nprocs()),
    uitsl::AssignIntegrated<uitsl::thread_id_t>{},
    netuit::AssignAvailableProcs{}
  };

  auto bundles = mesh.GetSubmesh(0);

  REQUIRE( bundles.size() == 1 );
  REQUIRE(
    (bundles[0].GetInputOrNullopt(0) || bundles[0].GetOutputOrNullopt(0))
  );

  return std::tuple{
    bundles[0].GetInputOrNullopt(0),
    bundles[0].GetOutputOrNullopt(0)
  };

};

decltype(auto) make_ring_bundle() {
  netuit::Mesh<Spec> mesh{
    netuit::RingTopologyFactory{}(uitsl::get_nprocs()),
    uitsl::AssignIntegrated<uitsl::thread_id_t>{},
    netuit::AssignAvailableProcs{}
  };

  auto bundles = mesh.GetSubmesh();

  REQUIRE( bundles.size() == 1);

  return std::tuple{ bundles[0].GetInput(0), bundles[0].GetOutput(0) };

}

TEST_CASE("Is initial Get() result value-intialized?") { REPEAT {

  auto [input, output] = make_ring_bundle();

  REQUIRE( input.Get() == MSG_T{} );
  REQUIRE( input.JumpGet() == MSG_T{} );

} }

TEST_CASE("Unmatched gets") { REPEAT {

  auto [input, output] = make_dyadic_bundle();

  for (int i = 0; uitsl::safe_leq(i, 2 * uit::DEFAULT_BUFFER); ++i) {
    REQUIRE( input.JumpGet() == MSG_T{} );
  }

  UITSL_Barrier( MPI_COMM_WORLD );

  output.Put({42});
  while( input.JumpGet() != MSG_T{42});

  for (int i = 0; uitsl::safe_leq(i, 2 * uit::DEFAULT_BUFFER); ++i) {
    REQUIRE( input.JumpGet() == MSG_T{42} );
  }

} }

TEST_CASE("Unmatched puts") { REPEAT {

  auto [input, output] = make_dyadic_bundle();

  for (int i = 0; uitsl::safe_leq(i, 2 * uit::DEFAULT_BUFFER); ++i) output.TryPut(MSG_T(i));

  REQUIRE( input.JumpGet().size() <= 2 * uit::DEFAULT_BUFFER );

  UITSL_Barrier( MPI_COMM_WORLD ); // todo why

} }

TEST_CASE("Eventual flush-out") { REPEAT {

  auto [input, output] = make_dyadic_bundle();

  for (int i = 0; uitsl::safe_leq(i, 2 * uit::DEFAULT_BUFFER); ++i) output.TryPut({});

  while ( !output.TryPut( {1} ) ) {
    const auto res{ input.JumpGet() }; // operational!
    REQUIRE( std::set<MSG_T>{{}, {1}}.count(res) );
  }

  while ( input.JumpGet() != MSG_T{1} ) {
    const auto res{ input.JumpGet() }; // operational!
    REQUIRE( std::set<MSG_T>{{}, {1}}.count(res) );
  }

  REQUIRE( input.JumpGet() == MSG_T{1} );

  UITSL_Barrier( MPI_COMM_WORLD ); // todo why

} }

TEST_CASE("Validity") { REPEAT {

  auto [input, output] = make_dyadic_bundle();

  emp::vector<int> last{};
  for (int msg = 0; msg < 10 * std::kilo::num; ++msg) {

    output.TryPut( MSG_T{msg} );

    const MSG_T current = input.JumpGet();
    if ( current.size() ) {
      REQUIRE( current.size() == 1 );
      REQUIRE( current.front() >= 0 );
    }
    if ( current.size() ) {
      REQUIRE( current.size() == 1 );
      REQUIRE( current.front() < 10 * std::kilo::num );
    }

    if ( last.size() ) {
      REQUIRE( last.front() <= current.front() );
    }

    last = current;

  }

  UITSL_Barrier(MPI_COMM_WORLD); // todo why

} }
