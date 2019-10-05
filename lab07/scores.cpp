//Hengyi Li
//This Program is to decide the phone plan
//This Program finished by Hengyi Li on 8：22 PM, 26 Sep, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <istream>

using namespace std;

int main()
{
  const unsigned PRECISION = 2;
  unsigned max_score = 0;
  unsigned min_score =100;
  
  //Open File
  ifstream in_file;
  in_file.open("scores.txt");

  //Header Of the number of scores
  unsigned number_of_scores;
  in_file >> number_of_scores;
  cout << "The number of scores is: " << number_of_scores << endl;
  
  //Change the cursor place
  string line;
  string dummy;
  getline(in_file, dummy);
  
  //Main Loop of the Names, Average score, Max score, Min score
  for (unsigned loop_times = 0; loop_times < number_of_scores; loop_times++)
  {
    //get the name of the user
    double average;
    getline(in_file, line);
    cout << line << endl;
    //get the number
    in_file >> line;
    cout << line;
    
    //average
    unsigned numbers_read_from_the_text;
    double total_scores;
    total_scores += numbers_read_from_the_text;
    average = (total_scores / number_of_scores);
    //Min and max number
    if (numbers_read_from_the_text <= min_score )
    {
      min_score = numbers_read_from_the_text;
    }
    else if (numbers_read_from_the_text >= max_score)
    {
      max_score = numbers_read_from_the_text;
    }
    //output everything
  }
  ofstream output_file;
  output_file.open("demofile.txt");

  cout << "Now writing data to the file" << endl;

  output_file << min_score << " " << max_score << " " << average << endl; 
  output_file.close();
  cout << "Done." << endl;
  in_file.close();
  return 0;
}
