#include "uit/config/ImplSpec.hpp"
#include "uit/duct/proc/accumulating+type=fundamental/inlet=Accumulate+outlet=WithdrawingWindow_f::IaOwwDuct.hpp"

using ImplSel = uit::ImplSelect<
  uit::a::SerialPendingDuct,
  uit::a::AtomicPendingDuct,
  uit::f::IaOwwDuct
>;

#include "../ProcDuct.hpp"