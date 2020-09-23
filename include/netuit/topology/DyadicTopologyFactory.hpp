#pragma once

#include "../../../third-party/Empirical/source/base/vector.h"

#include "TopoEdge.hpp"
#include "Topology.hpp"
#include "TopoNode.hpp"

namespace netuit {

netuit::Topology make_dyadic_topology(const size_t cardinality) {

  netuit::Topology res;

  size_t edge_counter{};

  for (size_t dyad = 0; dyad < cardinality/2; ++dyad) {

      netuit::TopoEdge forward_edge{edge_counter++};
      netuit::TopoEdge backward_edge{edge_counter++};

      res.push_back(netuit::TopoNode{
        {backward_edge.GetOutlet()},
        {forward_edge.GetInlet()}
      });
      res.push_back(netuit::TopoNode{
        {forward_edge.GetOutlet()},
        {backward_edge.GetInlet()}
      });

  }

  // for odd cardinality, add a loop pipe
  if (cardinality%2) {
    netuit::TopoEdge self_edge{edge_counter++};

    res.push_back(netuit::TopoNode{
      {self_edge.GetOutlet()},
      {self_edge.GetInlet()}
    });
  };

  return res;

}

struct DyadicTopologyFactory {
  netuit::Topology operator()(const size_t cardinality) const {
    return make_dyadic_topology(cardinality);
  }
  static std::string GetName() { return "Dyadic Topology"; }
};

} // namespace netuit