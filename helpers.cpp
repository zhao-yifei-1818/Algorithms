#include "helpers.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

void readRegions(vector<Region>& regions)
{
  ifstream file("ZILLOW_REGIONS.csv");
  string line;
  while (getline(file, line)) {
    std::stringstream ss(line);
    std::string id, city, state;
    std::getline(ss, id, ',');
    std::getline(ss, city, ',');
    std::getline(ss, state, ',');
    regions.push_back({std::stoi(id), city, state});
  }
  file.close();
}

void print(std::vector<Region>& regions)
{
  for (int i = 0; i < 5; ++i) {
    const Region& region = regions[i];
    std::cout << "(" << region.id << ", " << region.city << ", " << region.state
              << ")" << std::endl;
  }
}
