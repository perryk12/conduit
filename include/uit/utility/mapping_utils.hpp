#pragma once

#include <cmath>

#include "../../../third-party/Empirical/source/base/vector.h"

using Point = emp::vector<size_t>;
using Dims = emp::vector<size_t>;

namespace uit {

size_t linear_encode(const Point& p, const Dims& dims) {
    size_t mx = 1;
    size_t encoded = 0;
    for (size_t i = 0; i < dims.size(); ++i) {
        encoded += p[i] * mx;
        mx *= dims[i];
    }
    return encoded;
}
Point linear_decode(size_t r, const Dims& dims) {
    emp::vector<size_t> decoded;
    for (size_t i = 0; i < dims.size(); ++i) {
        decoded.push_back(r % dims[i]);
        r /= dims[i];
    }
    return decoded;
}

// TODO: add a Hilbert curve variant


};