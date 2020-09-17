#include "uit/config/ImplSpec.hpp"
#include "uit/duct/intra/put=dropping+get=stepping+type=any/a::SerialPendingDuct.hpp"
#include "uit/duct/mock/ThrowDuct.hpp"

using ImplSel = uit::ImplSelect<
  uit::a::SerialPendingDuct,
  uit::ThrowDuct,
  uit::ThrowDuct
>;

#include "../IntraDuct.hpp"
#include "../SteppingIntraDuct.hpp"
#include "../ValueIntraDuct.hpp"