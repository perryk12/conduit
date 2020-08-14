#pragma once

#include <stddef.h>

#include "../utility/print_utils.hpp"

namespace uit {

class TopoNodeOutput {

  size_t edge_id;

public:

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

};

}
