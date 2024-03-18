#include "helpers.h"
#include <vector>

int main()
{
  std::vector<Region> regions;
  readRegions(regions);
  print(regions);
  return 0;
}
