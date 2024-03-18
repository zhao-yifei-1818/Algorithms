#ifndef HELPERS_H
#define HELPERS_H
using namespace std;
#include <string>
#include <vector>
struct Region {
  int id;
  string city;
  string state;

  bool operator<(const Region& other) const
  {
    return id < other.id;
  }
};
void readRegions(vector<Region>& regions);
void print(const vector<Region>& regions);
#endif // HELPERS_H
