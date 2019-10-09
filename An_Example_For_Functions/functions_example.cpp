// A program to illustrate a function call, from Gaddis 6-2
#include <iostream>
using namespace std;
/**
display a simple message on the screen
*/
 void display_message();
int main()
{
cout << "Hello from main" << endl;
for (unsigned count = 0; count < 5; count++)
{
display_message();
}
cout << "Back in main again" << endl;
return 0;
}

void display_message()
{
cout << "Hello from display_message" << endl;
}