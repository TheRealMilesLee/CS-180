//Hengyi Li
//This Program is to decide the magic square
//This Program finished by Hengyi Li on 04：56 PM, 19 Oct, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const unsigned COLO_SIZE = 3;
const unsigned ROW_SIZE = 3;

/**
 * This function is used to validate the square
 * @return an boolean value that can decide is the square or not
 */
bool validate_square();
/**
 * The function prompts the user for a filename.
 * @param ifstream is for input the file from the disk
 * @param in_file if for reference the get the input file form the disk
 * @return the number that in the file
 */
string get_input_file(string& in_file);

/**
 * This function is used for print out the square
 */
void print_square();

/**
 * This function is used to read the square from the file
 * @param square is for the file that can puts in a array
 * @param file   get the input file
 */
void read_square_from_file(unsigned square[ROW_SIZE][COLO_SIZE], ifstream& file);

int main()
{
  ifstream in_file; 
  string filename;
  get_input_file(filename);
  
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
      string square[ROW_SIZE][COLO_SIZE]{read_square_from_file()};
      return square;
    }
  }
}
bool validate_square()
{
  const unsigned NUMBER_OF_ROW_AND_COLUMNS = 3;
  unsigned square_row1;
  unsigned square_column1;
  unsigned square_row2;
  unsigned square_column2;
  unsigned square_row3;
  unsigned square_column3;
  string filename;
  get_input_file(filename);
  for (unsigned count = 0; count < NUMBER_OF_ROW_AND_COLUMNS; count++)
  {
    if(square_row1 == square_column1)
    {
      return "This is a magic square";
    }
    else if (square_row2 == square_column2)
    {
      return "This is a magic square";
    }
    else if (square_row3 == square_column3)
    {
      return "This is a magic square";
    }
    else if(square_row1 == square_row2)
    {
      return "This is a magic square";
    }
    else if (square_row1 == square_row3)
    {
      return "This is a magic square";
    }
    else if(square_row2 == square_row3)
    {
      return "This is a magic square";
    }
    else if(square_column1 == square_column2)
    {
      return "This is a magic square";
    }
    else if (square_column1 == square_column3)
    {
      return "This is a magic square";
    }
    else if (square_column2 == square_column3)
    {
      return "This is a magic square";
    }
    else 
    {
      return "This is not a magic square";
    }
  }
}

void print_square()
{
  bool done = false;
  while (!done)
  {
    string filename;
    cout << "+---+---+---+" << endl << "|" << get_input_file(filename) << "|" << endl;
    
  }
}

void read_square_from_file(unsigned square[ROW_SIZE][COLO_SIZE], ifstream& file)
{
  for (unsigned row = 0; row < ROW_SIZE; row++)
  {
    for (unsigned col = 0; col < COLO_SIZE; col++)
    {
      file >> square[row][col];
    }
  }
  file.close();
}