#include <string>

#define CATCH_CONFIG_MAIN
#include "Catch/single_include/catch2/catch.hpp"

#include "uitsl/containers/safe/list.hpp"

TEST_CASE("deque") {

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
