#include "helpers.h"

void readRegions(vector<Region>& regions)
{
  vector<Region> regions;
  ifstream file(filename);
  string line;

  if (!file.is_open()) {
    cerr << "Unable to open file: " << filename << endl;
    return regions; // Return an empty vector if the file cannot be opened
  }

  while (getline(file, line)) {
    istringstream sstream(line);
    string field;
    Region region;

    // Parse the ID
    if (getline(sstream, field, ',')) {
      region.id = stoi(field);
    }

    // Parse the City
    if (getline(sstream, field, ',')) {
      region.city = field;
    }

    // Parse the State
    if (getline(sstream, field)) {
      region.state = field;
    }

    // Add the Region to the vector
    regions.push_back(region);
  }

  file.close();
  return regions;
}