#include "stats.h"
#include "stdio.h"
using namespace std;
using namespace Statistics;

    
ComputeAVGMaxMin Statistics::ComputeStatistics(std::vector<float>& report)
{
    //Implement statistics here
    
    float Average = 0;
    float Maximum = 0;
    float Minimum = 0;
    
   // size = sizeof(report)/sizeof(report[0])
  //  Average = CalculateAvg(report);
   // Maximum = CalculateMax(report);
   // Minimum = CalculateMin(report);
} 
float Statistics::CalculateAvg(float report[])
{
    float sum = 0;
    float Avg = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + report[i];
    }
    Avg = sum/size;

    return Avg;
}

float Statistics::CalculateMax(float report[])
{
    float Max = report[0];
    for(int i=1;i<size;i++)
    {
       if(Max > report[i])
       {
          Max =  report[i];
       }
    }
    return Max;
}

float Statistics::CalculateMin(float report[])
{
     float Min = report[0];
    for(int i=1;i<size;i++)
    {
       if(Min < report[i])
       {
          Min =  report[i];
       }
    }
    return Min;
}

