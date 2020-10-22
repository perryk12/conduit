#include <string>
#include <list>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/containers/safe/list.hpp"

#include "uitsl/parallel/ThreadMap.hpp"
#include "uitsl/parallel/ThreadTeam.hpp"

TEST_CASE("list begin() and end()") {


  std::list<std::string> reference{ "a", "b", "c", "d" };
  uitsl::safe::list<std::string> implementation{ "a", "b", "c", "d" };

  REQUIRE( *reference.begin() == *implementation.begin() );
  REQUIRE(
    *std::prev( reference.end() ) == *std::prev( implementation.end() )
  );

  REQUIRE( *reference.cbegin() == *implementation.cbegin() );
  REQUIRE(
    *std::prev( reference.cend() ) == *std::prev( implementation.cend() )
  );

}

TEST_CASE("list, multithread") {

  // TODO expand stub test
  uitsl::safe::list<std::string> list;

  REQUIRE(list.empty());
  list.push_back("hello");
  REQUIRE(list.front() == "hello");

  REQUIRE(list.back() == "hello");

}

TEST_CASE("list") {

  // TODO expand stub test
  uitsl::safe::list<std::string> list;

  uitsl::ThreadTeam team;

  for (size_t thread = 0; thread < 4; ++thread) {
    team.Add([&list](){
      list.push_back("hello");
    });
  }
  team.Join();
  REQUIRE(list.front() == "hello");
  REQUIRE(list.size() == 4);

}
