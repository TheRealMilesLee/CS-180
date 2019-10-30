/* Xian Wu
   This program read a square and  determine whether program is a magic
   square */

#include <iostream>
#include <fstream>
#include <istream>

using namespace std;
const unsigned SIZE = 3;

/**
   open file and determine whether file name is right
   @param in_file
 */
void get_input_file(ifstream &in_file);

/**
   read the square from file and put it into program's square
   @param square create a square in program
   @param file read the square in file and put it into program square
 */
void read_square_from_file(unsigned square[SIZE][SIZE], ifstream &file);

/**
   print the square
   @param square read the square in program
 */
void print_square(unsigned square[SIZE][SIZE]);

/**
 * determine whether the square is a valid magic square
 * @param square read the square in program
 * @return the bool value of whether the square is a valid magic square
 */
bool validate_square(unsigned square[SIZE][SIZE]);


int main()
{
  ifstream in_file;
  string file_name;
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

void get_input_file(ifstream &in_file)
{
  string file_name;
  cout << "Enter a filename for processing: ";
  getline(cin, file_name);
  in_file.open(file_name);
  while (in_file.fail())
  {
    cout << "Could not open " << file_name << " .Please try again."
         << endl << "Enter a filename for processing: ";

    getline(cin, file_name);
    in_file.open(file_name);
  }
}

void read_square_from_file(unsigned square[SIZE][SIZE], ifstream &file)
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

void print_square(unsigned square[SIZE][SIZE])
{
  for (unsigned row = 0; row < SIZE; row++)
  {
    cout << endl << " +---+---+---+" << endl << " | ";
    for (unsigned col = 0; col < SIZE; col++)
    {
      cout << square[row][col] << " | ";
    }
  }
  cout << endl << " +---+---+---+" << endl;
}

bool validate_square(unsigned square[SIZE][SIZE])
{
  unsigned first_row = 0;
  unsigned second_row = 0;
  unsigned third_row = 0;
  unsigned first_col = 0;
  unsigned second_col = 0;
  unsigned third_col = 0;
  unsigned first_diagonal = 0;
  unsigned second_diagonal = 0;

  for (unsigned row = 0; row < SIZE; row++)
  {
    first_col += square[row][0];
  }

  for (unsigned row = 0; row < SIZE; row++)
  {
    second_col += square[row][1];
  }

  for (unsigned row = 0; row < SIZE; row++)
  {
    third_col += square[row][2];
  }

  for (unsigned col = 0; col < SIZE; col++)
  {
    first_row += square[0][col];
  }

  for (unsigned col = 0; col < SIZE; col++)
  {
    second_row += square[1][col];
  }

  for (unsigned col = 0; col < SIZE; col++)
  {
    third_row += square[2][col];
  }

  for (unsigned row = 0; row < SIZE; row++)
  {
      first_diagonal += square[row][row];
  }

  for (unsigned row = 0; row < SIZE; row++)
  {
      second_diagonal += square[SIZE - row - 1][row];
  }

  return (first_col == second_col && first_col == third_col &&
          first_col == first_row && first_col == second_row &&
          first_col == third_row && first_col == first_diagonal &&
          first_col == second_diagonal);
}