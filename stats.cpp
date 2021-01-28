#include "stats.h"
#include "stdio.h"
using namespace std;
using namespace Statistics;

    
ComputeAVGMaxMin Statistics::ComputeStatistics(const std::vector<float>& report)
{
    //Implement statistics here
    ComputeAVGMaxMin statreport;
    statreport.Average;
    statreport.Maximum;
    statreport.Minimum;
    
 //   float Average;
   // Average = 0.0;
   // float Maximum = 0;
   // float Minimum = 0;
    
   // size = sizeof(report)/sizeof(report[0])
  //  Average = CalculateAvg(report);
   // Maximum = CalculateMax(report);
   // Minimum = CalculateMin(report);
} 
float ComputeAVGMaxMin::CalculateAvg(float report[])
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

float ComputeAVGMaxMin::CalculateMax(float report[])
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

float ComputeAVGMaxMin::CalculateMin(float report[])
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

