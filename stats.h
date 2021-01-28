#include <vector>
namespace Statistics
{
    
class ComputeAVGMaxMin 
{
    public:
       int size;
    //void ComputeStatistics(float report[]);
    float Average;
   float Maximum;
   float Minimum;
    float CalculateAvg(const std::vector<float>& report);
    float CalculateMax(const std::vector<float>& report);
    float CalculateMin(const std::vector<float>& report);
};
   ComputeAVGMaxMin ComputeStatistics(const std::vector<float>& report);
}
