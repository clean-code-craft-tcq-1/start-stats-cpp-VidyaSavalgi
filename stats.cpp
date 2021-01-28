#include "stats.h"
#include "stdio.h"
using namespace std;
int main()
{

    
void Statistics::ComputeStatistics(const std::vector<float>& report)
{
    //Implement statistics here
    
    int size =0;
    float Average = 0;
    float Maximum = 0;
    float Minimum = 0;
    /*cout<<"enter the number of elements"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the number"<<endl;
        cin>>report[i];
    }
    report.push_back(rstatarray)*/

    Average = CalculateAvg(report);
    Maximum = CalculateMax(report);
    Minimum = CalculateMin(report);
} 
float Statistics::CalculateAvg(const std::vector<float>& report)
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

float Statistics::CalculateMax(const std::vector<float>& report)
{
    float Max = statinput[0];
    for(int i=1;i<report.size;i++)
    {
       if(Max > report[i])
       {
          Max =  report[i];
       }
    }
    return Max;
}

float Statistics::CalculateMin(const std::vector<float>& report)
{
     float Min = statinput[0];
    for(int i=1;i<report.size;i++)
    {
       if(Min < report[i])
       {
          Min =  report[i];
       }
    }
    return Min;
}


}
