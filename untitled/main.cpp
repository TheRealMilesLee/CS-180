#include <iostream>
#include <fstream>
 using namespace std;
int main()
{
  ifstream file;
  string filename;
  cout << "Enter a filename for processing: ";
  cin >> filename;
  bool done = false;
  while (!done)
  {
    file.open(filename);
    if (file.fail())
    {
      cout << "You have entered wrong input" << endl;
      cin >> filename;
    }
    else
    {
      done = !file.fail();
    }
  }
  return 0;
}