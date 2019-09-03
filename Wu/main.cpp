//Xian Wu

/*This program will calculate rating with given pass completions, pass attempts, yards gained, touchdowns
and interceptions.*/

#include <iostream>
using namespace std;

int main()
{
  double completions;
  cout << "Enter the number of completions: ";
  cin >> completions;

  double attempts;
  cout << "Enter the number of attempts:";
  cin >> attempts;

  double yards;
  cout << "Enter the number of yards:";
  cin >> yards;

  double touchdowns;
  cout << "Enter the number of touchdowns:";
  cin >> touchdowns;

  double interceptions;
  cout << "Enter the number of interceptions:";
  cin >> interceptions;

  double C = (completions / attempts * 100.0 - 30.0) / 20.0;

  double Y = (yards / attempts - 3.0) / 4.0;

  double T = touchdowns / attempts * 20.0;

  double I = 2.375 - 25.0 * interceptions / attempts;

  double rating = ((C + Y + T + I) / 6) * 100;

  cout << "The player's rating is: " << rating;

  return 0;

}
