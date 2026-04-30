#pragma once

#include <vector>
#include <memory>
#include "gdv/losses/ILossFunction.h"

namespace gdv::models{

class LogisticRegression {
public:
    LogisticRegression();
    
    // Methods of models
    
private:
    std::unique_ptr<gdv::losses::ILossFunction> loss_fn_;
};

} // namespace gdv::models