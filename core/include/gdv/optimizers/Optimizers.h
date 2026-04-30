#pragma once

#include <vector>

namespace gdv::optimizers{

class Optimizers {
public:
    Optimizers();

    //optimizers:
    double L1_Norm(const std::vector<double>& omegas);
    double L2_Norm(const std::vector<double>& omegas);
};


} // namespace gdv::optimizers