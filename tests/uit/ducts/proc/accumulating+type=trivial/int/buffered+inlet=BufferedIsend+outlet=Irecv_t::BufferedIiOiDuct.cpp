#include "uit/ducts/intra/accumulating+type=any/a::AccumulatingDuct.hpp"
#include "uit/ducts/mock/ThrowDuct.hpp"
#include "uit/ducts/proc/accumulating+type=trivial/buffered+inlet=BufferedIsend+outlet=Irecv_t::BufferedIiOiDuct.hpp"
#include "uit/setup/ImplSpec.hpp"

using ImplSel = uit::ImplSelect<
  uit::a::AccumulatingDuct,
  uit::ThrowDuct,
  uit::t::BufferedIiOiDuct
>;

using MSG_T = int;

#include "../../AccumulatingProcDuct.hpp"
