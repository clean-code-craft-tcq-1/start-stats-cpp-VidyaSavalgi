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
    float CalculateAvg(float report[]);
    float CalculateMax(float report[]);
    float CalculateMin(float report[]);
};
   ComputeAVGMaxMin ComputeStatistics(const std::vector<float>& report);
}
