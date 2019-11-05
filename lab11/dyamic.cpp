//Hengyi Li
//This Program is for show a Dynamic Array
//This Program Created by Hengyi Li on 11:07 AM, Nov 5, 2019
//This Program has been done by Hengyi Li on 1:07 AM, Nov , 2019.
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <random>
#include <iostream>
#include <vector>

using namespace std;

// function Javadoc and prototypes here

/**
 * This function is to sort the array
 * @param values_array get the array that reads from the file
 * @param value_count get how many numbers that put in the array
 */
void sort_array(*values, size_t value_count);

/**
 * This function is used to copy aray to the vector
 * @param values_array get the values that in the array
 * @param values_vector initialize a vector that can store the array
 * @param value_count get how many numbers in the array
 */
void copy_array_to_vector(vector<int> &values_vector, unsigned value_count);

/**
 * This function is used to do a binary search in the vector.
 * @param values_vector is the searching place
 * @param value is the numbers that from the array
 * @return the searching result
 */
size_t binary_search_vector(const vector<int> &values_vector);

/**
 * this function is to get the random number in range.
 * @param low is the smallest number that the user type in
 * @param high is the biggest number that the user type in
 * @return the random value that can puts in the array
 */
size_t get_rand_in_range(unsigned low, unsigned high);

/**
 * This function is to get the 
 * @return
 */
size_t get_the_size_of_array();

int main()
{
  vector<int> values_vector; // a vector of values



  size_t value_count = 0;

  unsigned small;
  unsigned biggest;
  cout << "Enter the minimum value: ";
  cin >> small;
  cout << "Enter the minimum value: ";
  cin >> biggest;

  for (unsigned looptimes = 0; looptimes < user_allocated_size; looptimes++ )
  {
    *values = get_rand_in_range(small, biggest);
  }
  cout << "generate " << user_allocated_size << " values" << endl;

  sort_array(value_count);

  cout << "The values in order: " << "[" << *values <<
  "]" << endl;

  copy_array_to_vector( values_vector, value_count);

  bool done = false;
  while (!done)
  {
    if ()
    {
      binary_search_vector(values_vector);
    }
    else
    {
      done = true;
    }
  } // while !done
  return 0;
}

// function definitions here
void sort_array(size_t value_count)
{
  for (size_t pass_indx = value_count - 1; pass_indx > 0; pass_indx--)
  {
    for (size_t compare_indx = 0; compare_indx < pass_indx; compare_indx++)
    {
      if (*values > values_array[compare_indx + 1])
      {
        swap(values_array[compare_indx], values_array[compare_indx + 1]);
      }
    }
  }
}

void copy_array_to_vector( vector<int> &values_vector, unsigned value_count)
{
  for (unsigned copytimes = 0; copytimes < value_count; copytimes++)
  {
    values_vector.push_back(values_array[copytimes]);
  }

}

size_t binary_search_vector(const vector<int> &values_vector)
{
  size_t first = 0;
  size_t last = values_vector.size() - 1;
  size_t position = values_vector.size();
  bool found = false;
  while (!found && first <= last && last < values_vector.size())
  {
    size_t middle = (first + last) / 2;
    //找大小在这
  }
  return position;
}

size_t get_rand_in_range(unsigned low, unsigned high)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = rand() % (high - low + 1) + low;
  return value;
}

size_t get_the_size_of_array()
{
  unsigned user_allocated_size;
  cout << "Enter the number of values: ";
  cin >> user_allocated_size;
  int* values = new int[user_allocated_size];
  return *values;
}
