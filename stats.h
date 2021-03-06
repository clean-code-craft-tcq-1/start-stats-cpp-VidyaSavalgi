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
}
class IAlerter
{
};
class EmailAlert : public IAlerter
{
    public:
    bool emailSent;
};

class LEDAlert : public IAlerter
{
     public:
      bool ledGlows;
};
class StatsAlerter 
{
    public:
     EmailAlert emailAlert;
    LEDAlert ledAlert;
   double maxThreshold;
    std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    //statsAlerter(maxThreshold, alerters);
    StatsAlerter (const double maxThreshold, std::vector<IAlerter*> alerters );
    void checkAndAlert(const std::vector<double>& alertvalues);
};
    
