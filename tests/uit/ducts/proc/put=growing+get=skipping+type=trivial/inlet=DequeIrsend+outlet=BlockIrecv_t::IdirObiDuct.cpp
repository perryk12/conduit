#include "uit/ducts/mock/ThrowDuct.hpp"
#include "uit/ducts/proc/put=growing+get=skipping+type=trivial/inlet=DequeIrsend+outlet=BlockIrecv_t::IdirObiDuct.hpp"
#include "uit/setup/ImplSpec.hpp"

using ImplSel = uit::ImplSelect<
  uit::a::SerialPendingDuct,
  uit::ThrowDuct,
  uit::t::IdirObiDuct
>;

#include "../ProcDuct.hpp"
#include "../SkippingProcDuct.hpp"
