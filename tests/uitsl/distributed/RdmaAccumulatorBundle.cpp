#include <mpi.h>

#define CATCH_CONFIG_DEFAULT_REPORTER "multiprocess"
#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/debug/MultiprocessReporter.hpp"
#include "uitsl/distributed/RdmaAccumulatorBundle.hpp"
#include "uitsl/mpi/MpiGuard.hpp"
#include "uitsl/polyfill/identity.hpp"

const uitsl::MpiGuard guard;

TEST_CASE("test data") {
  emp::vector<int> src{1, 2, 3};

  uitsl::RdmaAccumulatorBundle<int> dest{ src };

  REQUIRE( 0 == std::memcmp(
    src.data(),
    dest.data(),
    src.size() * sizeof(int)
  ) );

  dest.BumpEpoch();

  int res;
  std::memcpy(
    &res,
    dest.data() + src.size(),
    sizeof(int)
  );

  REQUIRE( res == 1 );
}

TEST_CASE("test byte_size") {
  emp::vector<int> src{1, 2, 3};

  uitsl::RdmaAccumulatorBundle<int> dest{ src };

  REQUIRE( dest.byte_size() == (src.size() + 1) * sizeof(int) );
}

TEST_CASE("test GetData") {
  emp::vector<double> src{1.0, 2.0, 3.0};

  uitsl::RdmaAccumulatorBundle<double> dest{ src };

  REQUIRE( dest.GetData() == src );
}

TEST_CASE("test Reset") {
  emp::vector<double> src{1.0, 2.0, 3.0};

  uitsl::RdmaAccumulatorBundle<double> dest{ src };

  dest.Reset();

  REQUIRE( std::none_of(
    reinterpret_cast<char*>( dest.data() ),
    reinterpret_cast<char*>( dest.data() ) + dest.byte_size(),
    std::identity
  ) );
}

TEST_CASE("test GetEpoch, BumpEpoch, and SetEpoch") {
  emp::vector<double> src{1.0, 2.0, 3.0};

  uitsl::RdmaAccumulatorBundle<double> dest{ src };

  REQUIRE( dest.GetEpoch() == 0 );

  dest.BumpEpoch();
  REQUIRE( dest.GetEpoch() == 1 );
  REQUIRE( 0 == std::memcmp(
    src.data(),
    dest.data(),
    src.size() * sizeof(int)
  ) );

  dest.BumpEpoch();
  REQUIRE( dest.GetEpoch() == 2 );
  REQUIRE( 0 == std::memcmp(
    src.data(),
    dest.data(),
    src.size() * sizeof(int)
  ) );

  dest.BumpEpoch();
  REQUIRE( dest.GetEpoch() == 3 );
  REQUIRE( 0 == std::memcmp(
    src.data(),
    dest.data(),
    src.size() * sizeof(int)
  ) );

  dest.SetEpoch(42);
  REQUIRE( dest.GetEpoch() == 42 );
  REQUIRE( 0 == std::memcmp(
    src.data(),
    dest.data(),
    src.size() * sizeof(int)
  ) );

  dest.Reset();
  REQUIRE( dest.GetEpoch() == 0 );

  dest.SetEpoch(42);
  REQUIRE( dest.GetEpoch() == 42 );

}

TEST_CASE("test BumpData") {
  emp::vector<double> src{1.0, 2.0, 3.0};

  uitsl::RdmaAccumulatorBundle<double> dest{ src };
  dest.BumpData( src );

  REQUIRE( dest.GetData() == emp::vector<double>{2.0, 4.0, 6.0} );
}
