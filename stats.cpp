#include "stats.h"
#include "stdio.h"
#include <iostream>
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
    for(int i=0;i<report.size();i++)
    {
        sum = sum + report[i];
        cout<<"i"<<i<<" "<<"sum"<<sum<<endl;
    }
    Avg = sum/report.size();
cout<<Avg;
    return Avg;
}

double ComputeAVGMaxMin::CalculateMax(const std::vector<double>& report)
{
    double  Max = report[0];
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
     double  Min = report[0];
    for(int i=1;i<report.size();i++)
    {
       if(Min <report[i])
       {
          Min =  report[i];
       }
    }
    return Min;
}

