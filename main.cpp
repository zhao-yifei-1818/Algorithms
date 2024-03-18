#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
struct Region {
  int id;
  string city;
  string state;
};

int main()
{
  vector<Region> regions;
  string line;
  ifstream file("ZILLOW_REGIONS.csv");

  // Check if the file can be opened
  if (file.is_open()) {
    // Read each line from the file
    while (getline(file, line)) {
      stringstream s(line);
      string field;
      Region region;

      // Parse the id
      if (getline(s, field, ',')) {
        region.id = stoi(field);
      }

      // Parse the city
      if (getline(s, field, ',')) {
        region.city = field;
      }

      // Parse the state
      if (getline(s, field)) {
        region.state = field;
      }

      // Add the region to the vector
      regions.push_back(region);
    }
    file.close();

    // Print out the first five Regions
    for (int i = 0; i < 5 && i < regions.size(); i++) {
      cout << "ID: " << regions[i].id << ", City: " << regions[i].city
           << ", State: " << regions[i].state << endl;
    }
  } else {
    cout << "Unable to open file" << endl;
    return 1;
  }

  return 0;
}
