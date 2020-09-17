#include <unordered_set>

#include <mpi.h>

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_DEFAULT_REPORTER "multiprocess"
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/mpi/MpiGuard.hpp"
#include "uitsl/mpi/mpi_utils.hpp"
#include "uitsl/debug/MultiprocessReporter.hpp"
#include "uitsl/mpi/Request.hpp"
#include "uitsl/utility/assign_utils.hpp"
#include "uitsl/math/math_utils.hpp"

const uitsl::MpiGuard guard;

TEST_CASE("comm_size") {

  // TODO
  // size_t comm_size(const MPI_Comm & comm)

}

TEST_CASE("split_comm") {

  const uitsl::proc_id_t my_rank{ uitsl::get_rank() };

  const uitsl::proc_id_t num_ranks{ uitsl::get_nprocs() };

  // TODO refactor to use assign_utils
  const MPI_Comm every_other{
    uitsl::split_comm([](const uitsl::proc_id_t rank){ return rank%2 == 0; })
  };
  const MPI_Comm halves{
    uitsl::split_comm([=](const uitsl::proc_id_t rank){
      return rank * 2 / num_ranks;
    })
  };

  REQUIRE(
    uitsl::difference(uitsl::comm_size(every_other), uitsl::comm_size(halves)) <= 1
  );

  emp::vector<uitsl::proc_id_t> comm_ranks( uitsl::comm_size(every_other) );

  UIT_Allgather(
    &my_rank, // const void *sendbuf
    1, // int sendcount
    MPI_INT, // MPI_Datatype sendtype
    comm_ranks.data(), // void *recvbuf
    1, // int recvcount
    MPI_INT, // MPI_Datatype recvtype
    every_other // MPI_Comm comm
  );

  REQUIRE( std::all_of(
    std::begin(comm_ranks),
    std::end(comm_ranks),
    [my_rank](const auto & rank){ return rank % 2 == my_rank % 2; }
  ) );

  comm_ranks.resize( uitsl::comm_size(halves) );

  UIT_Allgather(
    &my_rank, // const void *sendbuf
    1, // int sendcount
    MPI_INT, // MPI_Datatype sendtype
    comm_ranks.data(), // void *recvbuf
    1, // int recvcount
    MPI_INT, // MPI_Datatype recvtype
    halves // MPI_Comm comm
  );

  REQUIRE( std::all_of(
    std::begin(comm_ranks),
    std::end(comm_ranks),
    [=](const auto & rank){
      return rank * 2 / num_ranks == my_rank * 2 / num_ranks;
    }
  ) );

}

TEST_CASE("comm_to_string") {

  REQUIRE(!uitsl::comm_to_string(MPI_COMM_WORLD).empty());

}
