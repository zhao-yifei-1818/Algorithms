#include <fstream>
#include <iostream>
#include <sstream>

#include "helpers.h"
using namespace std;

int main()
{
  vector<Region> regions;
  readRegions(regions);
  print(regions);
  return 0;
}
