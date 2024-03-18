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
    stringstream ss(line);
    string id, city, state;
    getline(ss, id, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    regions.push_back({stoi(id), city, state});
  }
  file.close();
}

void print(vector<Region>& regions)
{
  for (int i = 0; i < 5; ++i) {
    const Region& region = regions[i];
    cout << "(" << region.id << ", " << region.city << ", " << region.state
         << ")" << endl;
  }
}
