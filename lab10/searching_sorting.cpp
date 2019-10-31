//Hengyi Li
//This Program is for searching and sorting
//This Program Created by Hengyi Li on 11：36 AM,29 Oct, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

const size_t ARRAY_SIZE = 100;

// function Javadoc and prototypes here
void sort_array(int values_array[ARRAY_SIZE], unsigned value_count);

void copy_array_to_vector(int values_array[ARRAY_SIZE], const vector<int>
    &values_vector, unsigned value_count);

size_t linear_search_array(int values_array[ARRAY_SIZE],
    const vector<int> &values_vector, unsigned values_count);

size_t binary_search_vector (vector<int> &values_vector, unsigned value);

int main()
{
  ifstream data_file;
  data_file.open("data.txt");

  vector<int> values_vector; // a vector of values
  int values_array[ARRAY_SIZE]; // an array of values

  int value;
  size_t value_count = 0;
  while(data_file >> value)
  {
    values_array[value_count] = value;
    value_count++;
  }
  data_file.close();
  cout << "Read " << value_count << " values from data.txt" << endl;

  sort_array(values_array, value_count);
  copy_array_to_vector(values_array, values_vector, value_count);

  bool done = false;
  while (!done)
  {
    cout << endl << "Enter a value to search for: ";
    cin >> value;
    if (value != 0)
    {
      size_t position = linear_search_array(values_array, value_count,
          value);
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
void sort_array(int values_array[ARRAY_SIZE], unsigned value_count)
{
  size_t size = values_array.size();
  for (size_t select_indx = 0; select_indx < size - 1; select_indx++)
  {
    int smallest_value = values_array.at(select_indx);
    size_t smallest_indx = select_indx;
    for (size_t compare_indx = select_indx + 1; compare_indx < size;
         compare_indx++)
    {
      if (values_array.at(compare_indx) < smallest_value)
      {
        smallest_value = values_array.at(compare_indx);
        smallest_indx = compare_indx;
      }
    }
    swap(values_array.at(smallest_indx), values_array.at(select_indx));
  }
}
void copy_array_to_vector(int values_array[ARRAY_SIZE], const vector<int>
&values_vector, unsigned value_count)
{

}

size_t linear_search_array(int values_array[ARRAY_SIZE], const vector<int>
    &values_vector, unsigned values_count)
{
  size_t index = 0;
  size_t size = values_vector.size();
  size_t position = size;
  bool found = false;

  while (index < size && !found)
  {
    if (values_vector.at(index) == values_count)
    {
      found = true;
      position = index;
    }
    index++;
  }
  return position;
}

size_t binary_search_vector (vector<int> &values_vector, unsigned value)
{
  size_t first = 0;
  size_t last = values_vector.size() - 1;
  size_t position = values_vector.size();
  bool found = false;
  while (!found && first <= last && last < values_vector.size())
  {
    size_t middle = (first + last) / 2;
    if (values_vector.at(middle) == value)
    {
      found = true;
      position = middle;
    }
    else if (values_vector.at(middle) > value)
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