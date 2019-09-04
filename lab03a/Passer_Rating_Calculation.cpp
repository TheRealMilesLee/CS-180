//Hengyi Li
//This Program is to calculate the passer rate in American NFL
//This Program finished by Hengyi Li on 12:11 PM, 3 Sep, 2019
//Copyright © 2019 Hengyi Li. All rights reserved.

#include <iostream>
using namespace std;

int  main()
{
  float completions;
  cout << "Please enter the number of completions: ";
  cin >> completions;

  float attempts;
  cout << "Please enter the number of attempts: ";
  cin >> attempts;

  float yards;
  cout << "Please enter the number of yards: ";
  cin >> yards;

  float touchdowns;
  cout << "Please enter the number of touchdowns: ";
  cin >> touchdowns;

  float interceptions;
  cout << "Please enter the number of interceptions: ";
  cin >> interceptions;

  float C;
  C = ((completions / attempts) * 100.0 - 30.0) / 20.0;

  float Y;
  Y = ((yards / attempts) - 3.0) / 4.0;

  float T;
  T = touchdowns / attempts * 20.0;

  float I;
  I = 2.375 - 25.0 * (interceptions / attempts);

  float rating;
  rating = ((C + Y + T + I) / 6.0) * 100.0;
  cout << "The player's rating is: " << rating << endl;

  return 0;

}
