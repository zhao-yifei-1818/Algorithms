#include "helpers.h"
#include <fstream>
#include <iostream>
#include <sstream>

void readRegions(std::vector<Region>& regions)
{
  std::ifstream file("./ZILLOW_REGIONS.csv");
  std::string line;
  while (std::getline(file, line)) {
    std::stringstream ss(line);
    std::string id, city, state;
    std::getline(ss, id, ',');
    std::getline(ss, city, ',');
    std::getline(ss, state, ',');
    regions.push_back({std::stoi(id), city, state});
  }
  file.close();
}

void print(const std::vector<Region>& regions)
{
  int count = std::min(static_cast<int>(regions.size()), 5);
  for (int i = 0; i < count; ++i) {
    const Region& region = regions[i];
    std::cout << "(" << region.id << ", " << region.city << ", " << region.state
              << ")" << std::endl;
  }
}
