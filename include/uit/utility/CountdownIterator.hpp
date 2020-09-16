#pragma once

#include <algorithm>
#include <chrono>
#include <limits>
#include <stddef.h>

#include "chrono_utils.hpp"
#include "CountdownWrapper.hpp"

namespace uit {

class CountdownIterator {

  const size_t duration;

  size_t elapsed{};

public:

  using iterator = uit::CountdownWrapper<CountdownIterator>;
  using elapsed_t = size_t;

  CountdownIterator(
    const size_t duration_=std::numeric_limits<size_t>::max()
  ) : duration{duration_}
  { ; }

  bool IsComplete() const {
    return GetElapsed() >= duration;
  }

  void Step() { ++elapsed; }

  size_t GetElapsed() const {
    return elapsed;
  }

  size_t GetRemaining() const {
    return GetElapsed() > duration
      ? duration - GetElapsed()
      : 0
    ;
  }

  double GetFractionComplete() const {
    return static_cast<double>(GetElapsed()) / static_cast<double>(duration);
  }

  CountdownIterator& operator++() { Step(); return *this; }

  iterator begin() { return { *this }; }

  iterator end() { return {}; }

};

} // namespace uit
