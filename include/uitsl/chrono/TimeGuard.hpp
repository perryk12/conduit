#pragma once

#include <chrono>

namespace uitsl {

template<typename DurationType>
class TimeGuard {

  DurationType &dest;

  const std::chrono::time_point<std::chrono::steady_clock> start;

public:

  explicit TimeGuard(DurationType &dest_)
  : dest{dest_}
  , start{std::chrono::steady_clock::now()}
  { ; }

  ~TimeGuard() {
    dest = std::chrono::duration_cast<DurationType>(
      std::chrono::steady_clock::now() - start
    );
  }

};

} // namespace uitsl
