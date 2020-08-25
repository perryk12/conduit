#pragma once

#include <stddef.h>
#include <utility>
#include <iostream>

#include "../utility/print_utils.hpp"

namespace uit {

class TopoNodeOutput {

  size_t edge_id;

public:

  TopoNodeOutput() = default;
  TopoNodeOutput(const size_t edge_id_)
  : edge_id(edge_id_)
  { ; }

  size_t GetEdgeID() const { return edge_id; }

  std::string ToString() const {
    std::stringstream ss;
    ss << format_member(
      "size_t edge_id",
      edge_id
    );
    return ss.str();
  }

  bool operator==(const TopoNodeOutput& other) const {
    return edge_id == other.edge_id;
  }

  friend std::ostream& operator<<(std::ostream& os, const TopoNodeOutput& node) {
    os << node.edge_id << " ";
    return os;
  }
};
}

namespace std {
  template <>
  struct hash<uit::TopoNodeOutput> {
    std::size_t operator()(const uit::TopoNodeOutput& k) const {
      return std::hash<size_t>()(k.GetEdgeID());
    }
  };
}