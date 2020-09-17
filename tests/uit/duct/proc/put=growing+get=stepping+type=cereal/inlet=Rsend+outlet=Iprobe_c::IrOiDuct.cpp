#include "uit/config/ImplSpec.hpp"
#include "uit/duct/mock/ThrowDuct.hpp"
#include "uit/duct/proc/put=growing+get=stepping+type=cereal/inlet=Rsend+outlet=Iprobe_c::IrOiDuct.hpp"

using ImplSel = uit::ImplSelect<
  uit::a::SerialPendingDuct,
  uit::ThrowDuct,
  uit::c::IrOiDuct
>;

#include "../ProcDuct.hpp"
#include "../SteppingProcDuct.hpp"