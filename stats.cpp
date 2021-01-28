#include "stats.h"
#include "stdio.h"
using namespace std;
using namespace Statistics;

    
ComputeAVGMaxMin Statistics::ComputeStatistics(const std::vector<float>& report)
{
    //Implement statistics here
    ComputeAVGMaxMin statreport;
    statreport.Average = CalculateAvg(report;
    statreport.Maximum = CalculateMax(report);
    statreport.Minimum = CalculateMin(report);
   
    
  //  Average = CalculateAvg(report);
   // Maximum = CalculateMax(report);
   // Minimum = CalculateMin(report);
} 
float ComputeAVGMaxMin::CalculateAvg(const std::vector<float>& report)
{
    float sum = 0;
    float Avg = 0;
    for(int i=0;i<report.size;i++)
    {
        sum = sum + report[i];
    }
    Avg = sum/report.size;

    return Avg;
}

float ComputeAVGMaxMin::CalculateMax(const std::vector<float>& report)
{
    float Max = report[0];
    for(int i=1;i<report.size;i++)
    {
       if(Max > report[i])
       {
          Max =  report[i];
       }
    }
    return Max;
}

float ComputeAVGMaxMin::CalculateMin(const std::vector<float>& report)
{
     float Min = report[0];
    for(int i=1;i<report.size;i++)
    {
       if(Min < report[i])
       {
          Min =  report[i];
       }
    }
    return Min;
}

