//Hengyi Li
//This Program is to decide the magic square
//This Program finished by Hengyi Li on 04：56 PM, 19 Oct, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <istream>
#include <fstream>

using namespace std;

bool validate_square();

string get_input_file(string& in_file);

void print_square();

void read_square_from_file(unsigned square[SIZE][SIZE], ifstream& file);

int main()
{
  ifstream in_file;
  get_input_file(in_file);

  unsigned square[SIZE][SIZE];
  read_square_from_file(square, in_file);
  print_square(square);

  if (validate_square(square))
  {
    cout << "This is a valid magic square." << endl;
  }
  else
  {
    cout << "This is not a valid magic square." << endl;
  }
  return 0;
}

bool validate_square()
{

}

string get_input_file(string& in_file)
{

}

void print_square()
{

}

void read_square_from_file(unsigned square[SIZE][SIZE], ifstream& file)
{
  for (unsigned row = 0; row < SIZE; row++)
  {
    for (unsigned col = 0; col < SIZE; col++)
    {
      file >> square[row][col];
    }
  }
  file.close();
}