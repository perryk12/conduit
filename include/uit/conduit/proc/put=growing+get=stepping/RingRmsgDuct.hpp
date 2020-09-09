#pragma once

#include <type_traits>

#include "../inlet/put=growing/RsendDuct.hpp"
#include "../outlet/get=stepping/RingIrecvDuct.hpp"

namespace uit {

/**
 * TODO
 *
 * @tparam ImplSpec class with static and typedef members specifying
 * implementation details for the conduit framework.
 */
template<typename ImplSpec>
struct RingRmsgDuct {

  using InletImpl = uit::RsendDuct<ImplSpec>;
  using OutletImpl = uit::RingIrecvDuct<ImplSpec>;

  static_assert(std::is_same<
    typename InletImpl::BackEndImpl,
    typename OutletImpl::BackEndImpl
  >::value);

  using BackEndImpl = typename InletImpl::BackEndImpl;

};

} // namespace uit
