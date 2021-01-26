#include "stats.h"
#include "stdio.h"
using namespace std;
int main()
{

void ComputeStatistics(const std::vector<statsarray>& statinput)
{
    //Implement statistics here
    std::vector<stat>& arstatarray;
    stat rstatarray;
    int size =0;
    double Average = 0;
    double Maximum = 0;
    double Minimum = 0;
    cout<<"enter the number of elements"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the number"<<endl;
        cin>>rstatarray[i];
    }
    arstatarray.push_back(rstatarray)

    Average = CalculateAvg(arstatarray, size);
    Maximum = CalculateMax(arstatarray, size);
    Minimum =CalculateMin(arstatarray, size);
} 
double CalculateAvg(const std::vector<statsarray>& statinput, int size )
{
    double sum = 0;
    double Avg = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + statinput[i];
    }
    Avg = sum/size;

    return Avg;
}

double CalculateMax(const std::vector<statsarray>& statinput, int size)
{
    double Max = statinput[0];
    for(int i=1;i<size;i++)
    {
       if(Max > statinput[i])
       {
          Max =  statinput[i];
       }
    }
    return Max;
}

double CalculateMin(const std::vector<statsarray>& statinput, int size)
{
     double Min = statinput[0];
    for(int i=1;i<size;i++)
    {
       if(Min < statinput[i])
       {
          Min =  statinput[i];
       }
    }
    return Min;
}


}
