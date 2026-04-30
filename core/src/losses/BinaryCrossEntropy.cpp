#include "gdv/losses/BinaryCrossEntropy.h"
#include <cmath>

namespace gdv::losses {

double BinaryCrossEntropy::compute(
        const std::vector<double>& y_true,
        const std::vector<double>& y_pred) const {
    
    
}

std::vector<double> BinaryCrossEntropy::gradient(
        const std::vector<double>& y_true,
        const std::vector<double>& y_pred) const {


}

}  // namespace gdv::losses
