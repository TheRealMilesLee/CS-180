//Hengyi Li
//This Program is for searching and sorting
//This Program Created by Hengyi Li on 11：36 AM,29 Oct, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
const size_t ARRAY_SIZE = 100;

/**
 * This is used for sorted the array.
 * @param array
 */
void sort_array(vector<int> & array_size, size_t value_count);

/**
   This function is used for the linear search
   @param arr an unsorted vector of values
   @param value the value to search for
   @return the position of value if found, or the size of the vector
   if not
*/
size_t linear_search_array(const vector<int> &array_size, unsigned value,
                           unsigned value_count);

/**
   This function is used for the iterative binary search
   @param array a sorted vector of values
   @param value the value to search for
   @return the position of value if found, or the size of the vector
   if not
*/
size_t binary_search_vector(const vector<int>& array_size, unsigned value);

/**
 * This function is used to copy the array to the vector.
 * @param values_array
 * @param arr
 * @param value_count
 * @return
 */
string copy_array_to_vector(const vector<int>& values_vector,
    const vector<int>& values_array, unsigned value_count);


int main()
{
  ifstream data_file;
  data_file.open("data.txt");

  vector<int> values_vector; // a vector of values
  vector<int> values_array; // an array of values

  int value;
  size_t value_count = 0;
  while(data_file >> value)
  {
    values_array[value_count] = value;
    value_count++;
  }
  data_file.close();
  cout << "Read " << value_count << " values from data.txt" << endl;

  sort_array(reinterpret_cast<vector<int> &>(values_array), value_count);
  copy_array_to_vector(values_vector, values_array, value_count);

  bool done = false;
  while (!done)
  {
    cout << endl << "Enter a value to search for: ";
    cin >> value;
    if (value != 0)
    {
      size_t position = linear_search_array(values_array, value_count, value);
      if (position == value_count)
      {
        cout << "Value was not found in the array" << endl;
      }
      else
      {
        cout << "Value is in the array at position " << position << endl;
      }

      position = binary_search_vector(values_vector, value);
      if (position == values_vector.size())
      {
        cout << "Value was not found in the vector" << endl;
      }
      else
      {
        cout << "Value is in the vector at position " << position << endl;
      }
    }
    else
    {
      done = true;
    }
  } // while !done

  return 0;
}

// function definitions here
void sort_array(vector<int> & array_size, size_t value_count)
{
  for (size_t pass_indx = array_size.size() - 1; pass_indx > 0; pass_indx--)
  {
    for (size_t compare_indx = 0; compare_indx < pass_indx; compare_indx++)
    {
      if (array_size.at(compare_indx) > array_size.at(compare_indx + 1))
      {
        swap(array_size.at(compare_indx), array_size.at(compare_indx + 1));
      }
    }
  }
}

size_t linear_search_array(const vector<int> &array_size, unsigned value,
                           unsigned value_count)
{
  size_t index = 0;
  size_t size = array_size.size();
  size_t position = size;
  bool found = false;

  while (index < size && !found)
  {
    if (array_size.at(index) == value)
    {
      found = true;
      position = index;
    }
    index++;
  }
  return position;
}

size_t binary_search_vector(const vector<unsigned>& array_size, unsigned
value)
{
  size_t first = 0;
  size_t last = array_size.size() - 1;
  size_t position = array_size.size();
  bool found = false;

  while (!found && first <= last && last < array_size.size())
  {
    size_t middle = (first + last) / 2;
    if (array_size.at(middle) == value)
    {
      found = true;
      position = middle;
    }
    else if (array_size.at(middle) > value)
    {
      last = middle - 1;
    }
    else
    {
      first = middle + 1;
    }
  }
  return position;
}

string copy_array_to_vector(const vector<int>& values_vector,
    const vector<int>& values_array, unsigned value_count)
{
  for (unsigned looptimes = 0; looptimes < ARRAY_SIZE; looptimes++)
  {
    value_count++;
  }
}