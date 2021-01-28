#include <vector>
namespace Statistics
class Statistics 
{
    Statistics();
    ~Statistics();
    void ComputeStatistics(const std::vector<float>& report);
    float CalculateAvg(const std::vector<float>& report);
    float CalculateMax(const std::vector<float>& report);
    float CalculateMin(const std::vector<float>& report);
}
