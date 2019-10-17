#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  const unsigned MAX_VALUE = 3;
  const unsigned MIN_VALUE = 1;
  unsigned computer_choice
      = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);

  cout << "computer choose " << computer_choice;
  
}
