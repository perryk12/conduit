#pragma once
#ifndef UITSL_PARALLEL_THREAD_UTILS_HPP_INCLUDE
#define UITSL_PARALLEL_THREAD_UTILS_HPP_INCLUDE

#include <atomic>
#include <limits>
#include <thread>
#include <stddef.h>

#include "../../../third-party/Empirical/source/base/assert.h"

#include "../math/math_utils.hpp"
#include "../utility/exec_utils.hpp"

namespace uitsl {

// TODO rename tid_t
using thread_id_t = size_t;
const thread_id_t max_thread{ std::numeric_limits<size_t>::max() };

// TODO rename get_tid
thread_id_t get_thread_id() {
  static std::atomic<size_t> counter{};
  const thread_local size_t thread_id{counter++};
  emp_assert(thread_id != uitsl::max_thread);
  return thread_id;
}

size_t get_nproc() {
  return uitsl::stoszt(exec("nproc"));
}

} // namespace uitsl

#endif // #ifndef UITSL_PARALLEL_THREAD_UTILS_HPP_INCLUDE
