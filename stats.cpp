#include "stats.h"
#include "stdio.h"
#include <iostream>
using namespace std;
using namespace Statistics;

    
ComputeAVGMaxMin Statistics::ComputeStatistics(const std::vector<double>& report)
{
    //Implement statistics here
    float epsi = 0.001;
    ComputeAVGMaxMin statreport;
    statreport.Average = 0;
    statreport.Maximum = 0;
    statreport.Minimum = 0;
    statreport.Average = statreport.CalculateAvg(report);
    statreport.Maximum = statreport.CalculateMax(report);
    statreport.Minimum = statreport.CalculateMin(report);
   cout<< statreport.Average<<endl;
    cout<<(statreport.Average - 4.525)<<endl;
    cout<<(std::abs(statreport.Average - 4.525) )<<endl;
    
  //  Average = CalculateAvg(report);
   // Maximum = CalculateMax(report);
   // Minimum = CalculateMin(report);
} 
float ComputeAVGMaxMin::CalculateAvg(const std::vector<double>& report)
{
    double  sum = 0;
    double  Avg = 0;
   // std::vector<double>& *iter;
    for(int i=0;i<report.size();i++)
    {
        sum = sum + report[i];
        cout<<"i"<<i<<" "<<"sum"<<sum<<endl;
    }
    Avg = sum/report.size();
cout<<Avg<<endl;
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

