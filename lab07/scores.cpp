//Hengyi Li
//This Program is to decide the phone plan
//This Program finished by Hengyi Li on 8：22 PM, 26 Sep, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <istream>

using namespace std;

int main()
{
  ifstream in_file;
  in_file.open("scores.txt");

  unsigned number_of_scores;
  in_file >> number_of_scores;
  cout << "The number of scores is: " << number_of_scores << endl;

  string dummy;
  getline(in_file, dummy);

  string line;
  while (getline (in_file,line))
  {
    cout << line << endl;
  }
  in_file.close();
  return 0;
}
