#include<iostream>
#include<fstream>

using namespace std;
const unsigned COLO_SIZE = 3;
const unsigned ROW_SIZE = 3;

string get_input_file(string& in_file);
void print_square();
void read_square_from_file(unsigned square[COLO_SIZE][ROW_SIZE], ifstream& file);

int main()
{
    string filename;
    get_input_file(filename);
    print_square();
    return 0;
}
string get_input_file(string& in_file)
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
      cout << "Could not open foobar.txt. Please try again. " << endl;
      cout << "Enter a filename for processing: ";
      cin >> filename;
    }
    else
    {
        
      return read_square_from_file(square,filename);
    }
  }
}
void print_square()
{
  bool done = false;
  while (!done)
  {
    string filename;

    for (unsigned count = 0; count < 3; count++)
    {
        cout << "+---+---+---+" << endl << "|" << read_square_from_file(square, filename) << "|" << endl;
    }
  }
}
void read_square_from_file(unsigned square[COLO_SIZE][ROW_SIZE], ifstream& file)
{
  for (unsigned row = 0; row < COLO_SIZE; row++)
  {
    for (unsigned col = 0; col < ROW_SIZE; col++)
    {
      file >> square[row][col];
    }
  }
  file.close();
}