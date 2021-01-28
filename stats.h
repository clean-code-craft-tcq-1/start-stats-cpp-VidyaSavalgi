#include <vector>
namespace Statistics
{
    
class ComputeAVGMaxMin 
{
    public:
       int size;
    //void ComputeStatistics(float report[]);
    float CalculateAvg(float report[]);
    float CalculateMax(float report[]);
    float CalculateMin(float report[]);
};
   ComputeAVGMaxMin ComputeStatistics(float report[]);
}
