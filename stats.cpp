#include "stats.h"
#include "stdio.h"
using namespace std;
using namespace Statistics;

    
ComputeAVGMaxMin Statistics::ComputeStatistics(const std::vector<double>& report)
{
    //Implement statistics here
    ComputeAVGMaxMin statreport;
    statreport.Average = statreport.CalculateAvg(report);
    statreport.Maximum = statreport.CalculateMax(report);
    statreport.Minimum = statreport.CalculateMin(report);
   
    
  //  Average = CalculateAvg(report);
   // Maximum = CalculateMax(report);
   // Minimum = CalculateMin(report);
} 
double ComputeAVGMaxMin::CalculateAvg(const std::vector<double>& report)
{
    double  sum;
    double  Avg;
   // std::vector<double>& *iter;
    for(auto iter = report.begin();iter< report.end();iter++)
    {
        sum = sum + *iter;
    }
    Avg = sum/report.size();

    return Avg;
}

double ComputeAVGMaxMin::CalculateMax(const std::vector<double>& report)
{
    const std::vector<double>&  Max = report[0];
    for(int i=1;i<report.size();i++)
    {
       if(Max > report[i])
       {
          Max =  report[i];
       }
    }
    return Max;
}

double ComputeAVGMaxMin::CalculateMin(const std::vector<double>& report)
{
     const std::vector<double>&  Min = report[0];
    for(int i=1;i<report.size();i++)
    {
       if(Min < report[i])
       {
          Min =  report[i];
       }
    }
    return Min;
}

