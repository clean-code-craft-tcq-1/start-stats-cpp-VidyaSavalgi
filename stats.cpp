#include "stats.h"
#include "stdio.h"
using namespace std;
int main()
{

void ComputeStatistics(const std::vector<float> report)
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

    Average = CalculateAvg(report, size);
    Maximum = CalculateMax(report, size);
    Minimum = CalculateMin(report, size);
} 
float CalculateAvg(const std::vector<float> report, int size )
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

float CalculateMax(const std::vector<float> report, int size)
{
    float Max = statinput[0];
    for(int i=1;i<size;i++)
    {
       if(Max > report[i])
       {
          Max =  report[i];
       }
    }
    return Max;
}

float CalculateMin(const std::vector<float> report, int size)
{
     float Min = statinput[0];
    for(int i=1;i<size;i++)
    {
       if(Min < report[i])
       {
          Min =  report[i];
       }
    }
    return Min;
}


}
