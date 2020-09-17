#include "uit/config/ImplSpec.hpp"
#include "uit/duct/proc/put=growing+get=stepping+type=trivial/inlet=Send+outlet=RingIrecv_t::IsOriDuct.hpp"

using ImplSel = uit::ImplSelect<
  uit::a::SerialPendingDuct,
  uit::a::AtomicPendingDuct,
  uit::t::IsOriDuct
>;

#include "../ProcDuct.hpp"