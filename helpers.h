
using namespace std;
#include <string>
#include <vector>
struct Region {
  int id;
  std::string city;
  std::string state;

  bool operator<(const Region& other) const
  {
    return id < other.id;
  }
};
void readRegions(vector<Region>& regions);