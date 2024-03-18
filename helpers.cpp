#include "helpers.h"

void readRegions(vector<Region>& regions)
{
  ifstream file("ZILLOW_REGIONS.csv");
  string line;
  while (getline(file, line)) {
    stringstream ss(line);
    string id, city, state;
    getline(ss, id, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    regions.push_back({stoi(id), city, state});
  }
  file.close();
};