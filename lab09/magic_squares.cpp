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
 * @param in_file if for reference the get the input file form the disk
 * @return the number that in the file
 */
void get_input_file(ifstream &in_file);

/**
 * This function is used for print out the square
 */
void print_square(unsigned square[ROW_SIZE][COLO_SIZE]);

/**
 * This fuction is used to read the square from the file.
 * @param square this is an 2-d array
 * @param file  get the filre from the disk.
 */
void read_square_from_file(unsigned square[ROW_SIZE][COLO_SIZE], ifstream
&file);

int main()
{
  ifstream in_file;
  string filename;
  get_input_file(in_file);

  unsigned square[ROW_SIZE][COLO_SIZE];
  read_square_from_file(square, in_file);
  print_square(square);

  if (validate_square())
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
  ifstream file;
  string filename;
  cout << "Enter a filename for processing: ";
  getline(cin, filename);
  bool done = false;
  while (!done)
  {
    file.open(filename);
    if (file.fail())
    {
      cout << "Could not open" << "  " << filename << "  "
           <<"Please try again. "<< endl;
      cout << "Enter a filename for processing: ";
      getline(cin, filename);
    }
    else
    {
      done = true;
    }
  }
}

bool validate_square()
{
  unsigned square[ROW_SIZE][COLO_SIZE];
  unsigned total_col_first = 0;
  unsigned total_col_second = 0;
  unsigned total_col_third = 0;
  unsigned total_row_first = 0;
  unsigned total_row_second = 0;
  unsigned total_row_third = 0;
  unsigned total_diagonal_left = 0;
  unsigned total_diagonal_right = 0;
  for (auto & row : square)
  {
    total_row_first += row[0];
  }
  for (auto & row : square)
  {
    total_row_second += row[1];
  }
  for (auto & row : square)
  {
    total_row_third += row[2];
  }
  for (auto & col : square)
  {
    total_col_first += col[0];
  }
  for (auto & col : square)
  {
    total_col_second += col[1];
  }
  for (auto & col : square)
  {
    total_col_third += col[2];
  }
  for (unsigned col = 0; col < COLO_SIZE; col++)
  {
    total_diagonal_left += square[COLO_SIZE - col][col];
  }
  for (unsigned row = 0; row < ROW_SIZE; row++)
  {
    total_diagonal_right += square[ROW_SIZE - row -1][row];
  }

  //validate the result.
  return total_col_first == total_row_first && total_diagonal_left ==
  total_diagonal_right && total_col_second == total_row_second &&
  total_col_third == total_row_third && total_col_first == total_col_second
  && total_col_first == total_col_third && total_col_second ==
  total_col_third && total_row_first == total_row_second && total_row_first
  == total_row_third && total_row_second == total_row_third;
}

void print_square(unsigned square[ROW_SIZE][COLO_SIZE])
{
  cout << "+---+---+---+" << endl;
  for (unsigned row = 0; row < ROW_SIZE; row++)
  {
     cout << "| " ;
    for (unsigned col = 0; col < COLO_SIZE; col++)
    {
      cout << square[row][col] << " | " ;
    }
    cout << endl << "+---+---+---+" << endl;
  }

}

void read_square_from_file(unsigned square[ROW_SIZE][COLO_SIZE], ifstream
&file)
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
