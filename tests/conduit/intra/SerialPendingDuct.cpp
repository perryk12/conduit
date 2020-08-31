#include "uit/conduit/ImplSpec.hpp"
#include "uit/conduit/intra/SerialPendingDuct.hpp"
#include "uit/conduit/mock/ThrowDuct.hpp"

using ImplSel = uit::ImplSelect<
  uit::SerialPendingDuct,
  uit::ThrowDuct,
  uit::ThrowDuct
>;

#include "IntraDuct.hpp"