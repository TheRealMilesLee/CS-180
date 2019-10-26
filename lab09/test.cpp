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
    ifstream file;
    string filename;
    unsigned square[COLO_SIZE][ROW_SIZE]{read_square_from_file(file)};
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
      done = true;
    }
    file.close();
  }
}
void print_square()
{
    ofstream output_file;
    output_file.open("2.txt");

    for (unsigned index = 0; index < COLO_SIZE && index < ROW_SIZE; index++)
    {
        output_file << square[COLO_SIZE][ROW_SIZE] << ' ';
    }
    output_file.close();
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