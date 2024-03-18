#include <fstream>
#include <iostream>
#include <sstream>

#include "helpers.h"
using namespace std;

int main()
{
  vector<Region> regions;
  string line;
  readRegions(regions);
  print(regions);
  return 0;
}
