#include <vector>

namespace Statistics {
    void ComputeStatistics(const std::vector<float> report);
    float CalculateAvg(const std::vector<float> report, int size );
    float CalculateMax(const std::vector<float> report, int size);
    float CalculateMin(const std::vector<float> report, int size);
}
