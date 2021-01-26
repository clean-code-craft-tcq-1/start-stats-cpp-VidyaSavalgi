#include <vector>
 struct statsarray
 {
     double stat;
 };
namespace Statistics {
    void ComputeStatistics(const std::vector<stat>& statinput );
    double CalculateAvg(const std::vector<stat>& statinput, int size );
    double CalculateMax(const std::vector<stat>& statinput, int size);
    double CalculateMin(const std::vector<stat>& statinput, int size);
}
