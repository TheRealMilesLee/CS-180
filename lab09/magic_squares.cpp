//Hengyi Li
//This Program is to decide the magic square
//This Program finished by Hengyi Li on 04：56 PM, 19 Oct, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <istream>
#include <fstream>

using namespace std;

/**
 * This function is used to validate the square
 * @return an boolean value that can decide is the square or not
 */
bool validate_square();
/**
 * This function is used to get the input file from the disk
 * @param in_file  is used for get the file from the disk
 * @return the data that reads from the the file
 */
ifstream get_input_file(string& in_file);

/**
 * This function is used for print out the square
 */
void print_square();

/**
 * This function is used to read the square from the file
 * @param square is for the file that can puts in a array
 * @param file   get the input file
 */
void read_square_from_file(unsigned square[SIZE][SIZE], ifstream& file);

int main()
{
  const int colum = 3;
  const int row = 3;
  ifstream in_file;
  string file;
  get_input_file( file);
  
  unsigned square[row][colum];
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
  for (unsigned index = 0; index < get_input_file(); index++)
  {
    
  }
}

ifstream get_input_file(string& in_file)
{
  string file;
  file.open(getline(cin, file))
}

void print_square()
{
  cout <<  "    +---+---+---+" << endl << "    | "  << square << "    | "
       << square << "    | " << square << "    | " << endl << "    | " <<
       square << "    | " << square << "    | " << square << "    | " <<
       endl << "    | "  << square << "    | " << square << "    | " <<
       square << "    | " << endl;
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