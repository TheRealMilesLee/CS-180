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

/**
 * This function is to sort the array
 * @param values_array get the array that reads from the file
 * @param value_count get how many
 */
void sort_array(int values_array[ARRAY_SIZE], unsigned value_count);

void copy_array_to_vector(int values_array[ARRAY_SIZE],  vector<int>
values_vector, unsigned value_count);

size_t linear_search_array(int values_array[ARRAY_SIZE], unsigned
values_count, int value);

size_t binary_search_vector(vector<int> &values_vector, unsigned value);

int main()
{
  ifstream data_file;
  data_file.open("../data.txt");

  vector<int> values_vector; // a vector of values
  int values_array[ARRAY_SIZE]; // an array of values

  int value;
  size_t value_count = 0;
  while (data_file >> value)
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
void sort_array(int values_array[ARRAY_SIZE], unsigned value_count)
{
  vector<int> array(values_array[ARRAY_SIZE]);
  for (size_t pass_indx = array.size(); pass_indx < value_count;
  pass_indx--)
  {
    for (size_t compare_indx = 0; compare_indx < pass_indx; compare_indx++)
    {
      if (array.at(compare_indx) > array.at(compare_indx + 1))
      {
        swap(array.at(compare_indx), array.at(compare_indx + 1));
      }
    }
  }
}

void copy_array_to_vector(int values_array[ARRAY_SIZE],  vector<int>
values_vector, unsigned value_count)
{
  for (size_t index = 0; index < value_count; index++)
  {
    values_vector.push_back(values_array[ARRAY_SIZE]);
  }
}

size_t linear_search_array(int values_array[ARRAY_SIZE], unsigned
values_count, int value)
{
  vector<int> array(values_array[ARRAY_SIZE]);
  size_t index = values_count;
  size_t size = array.size();
  size_t position = size;

  bool found = false;
  while (index < size && !found)
  {
    if (array.at(index) == value)
    {
      found = true;
      position = index;
    }
    index++;
  }
  return position;
}

size_t binary_search_vector(vector<int> &values_vector, unsigned value)
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