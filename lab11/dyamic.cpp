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
void sort_array(int values_of_array[], unsigned value_count);

/**
 * this function is to get the random number in range.
 * @param small is the smallest number that the user type in
 * @param biggest is the biggest number that the user type in
 * @return the random value that can puts in the array
 */
unsigned get_rand_in_range(unsigned small, unsigned biggest);

/**
 * This function is to generate the array
 * @param values_of_array
 * @param user_allocated_size
 */
 void generate_the_array(int values_of_array[], unsigned
 user_allocated_size);


 void out_put_the_array(int values_of_array[], unsigned user_allocated_size);


 void median_of_array(int values_of_array[], unsigned user_allocated_size);

int main()
{
  unsigned user_allocated_size;
  cout <<"Enter the number of values: ";
  cin >> user_allocated_size;
  int* values = new int[user_allocated_size];


  generate_the_array(values, user_allocated_size);
  sort_array(values, user_allocated_size);
  out_put_the_array(values, user_allocated_size);
  median_of_array(values, user_allocated_size);
  return 0;
}

// function definitions here
void sort_array(int values_of_array[], unsigned value_count)
{
  for (size_t pass_indx = value_count - 1; pass_indx > 0; pass_indx--)
  {
    for (size_t compare_indx = 0; compare_indx < pass_indx; compare_indx++)
    {
      if (values_of_array[compare_indx] > values_of_array[compare_indx + 1])
      {
        swap(values_of_array[compare_indx], values_of_array[compare_indx +
        1]);
      }
    }
  }
}

unsigned get_rand_in_range(unsigned small, unsigned biggest)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = rand() % (biggest - small + 1) + small;
  return value;
}

void generate_the_array(int values_of_array[], unsigned
user_allocated_size)
{
  int random;
  unsigned small;
  unsigned biggest;
  cout << "Enter the minimum value: ";
  cin >> small;
  cout << "Enter the minimum value: ";
  cin >> biggest;
   for (unsigned looptimes = 0; looptimes < user_allocated_size; looptimes++)
   {
     random = get_rand_in_range(small, biggest);
     values_of_array[looptimes] = random;
   }
}

void out_put_the_array(int values_of_array[], unsigned user_allocated_size)
{
  cout << "The values in order: [";
  for (unsigned looptimes = 0; looptimes <= user_allocated_size; looptimes++)
  {
    for (size_t position = 0; position < user_allocated_size; position++)
    {
      cout << values_of_array[position] << ",";
    }
    cout << " ";
  }
}