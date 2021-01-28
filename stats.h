#include <vector>
namespace Statistics
{
    
class ComputeAVGMaxMin 
{
    public:
       int size;
    //void ComputeStatistics(float report[]);
    double Average;
   double Maximum;
   double Minimum;
    double CalculateAvg(const std::vector<double>& report);
    double CalculateMax(const std::vector<double>& report);
    double CalculateMin(const std::vector<double>& report);
};
   ComputeAVGMaxMin ComputeStatistics(const std::vector<double>& report);
  
class EmailAlert
{
    public:
    bool emailSent;
};

class LEDAlert
{
     public:
      bool ledGlows;
};
class statsAlerter
{
    private:
    // std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    const float maxThreshold = 10.2;
    public:
     checkAndAlert(const std::vector<double>& alertvalues);
};
   statsAlerter checkAndAlert(const std::vector<double>& alertvalues);
}
