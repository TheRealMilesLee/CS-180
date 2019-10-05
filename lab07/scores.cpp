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
  const unsigned WIDTH = 25;
  const double A_GRADE = 90.0;
  const double B_GRADE = 80.0;
  const double C_GRADE = 70.0;
  const double D_GRADE = 60.0;
  //Open File
  ifstream in_file;
  in_file.open("scores.txt");

  //Header Of the number of scores
  unsigned number_of_scores;
  in_file >> number_of_scores;
  
  //Change the cursor place
  string line;
  string dummy;
  getline(in_file, dummy);
  
  ofstream output_file;
  output_file.open("grade_report.txt");
  //get the name of the user
  while (getline(in_file, line))
  {
    unsigned max_score = 0;
    unsigned min_score = 100;
    double average;
    //Main Loop of the Names, Average score, Max score, Min score
    for (unsigned loop_times = 0; loop_times < number_of_scores ; loop_times++)
    {
      //average
      unsigned numbers_read_from_the_text;
      in_file >> numbers_read_from_the_text;
      double total_scores;
      total_scores += numbers_read_from_the_text;
      average = (total_scores / number_of_scores);

      //Min and max number
        if (numbers_read_from_the_text < min_score)
        {
          min_score = numbers_read_from_the_text; 
        }
        else if (numbers_read_from_the_text > max_score)
        {
          max_score = numbers_read_from_the_text;
        }
        bool flag = false;
        do 
        {
          cout << line << right << setw(WIDTH) << min_score << "  " << max_score << "  " << setprecision(PRECISION) << fixed << average;
          if (average >= A_GRADE)
          {
            cout << "A" << endl;
          }
          else if (average >= B_GRADE && average < A_GRADE)
          {
            cout << "B" << endl;
          }
          else if (average >= C_GRADE && average < B_GRADE)
          {
            cout << "C" << endl;
          }
          else if (average >= D_GRADE && average < C_GRADE)
          {
            cout << "D" << endl;
          }
          else
          {
            cout << "F" << endl;
          }
          
          flag = true;
        }while(!flag);
    }
      //Data test
      getline(in_file, dummy);

       //output everything       
      cout << "Now writing data to the file" << endl;
      output_file << line << left << setw(WIDTH)  << "  " << min_score << "  " << max_score << "  " << setprecision(PRECISION) 
                  << fixed << average;
                  if (average >= A_GRADE)
                  {
                    output_file << "  " << "A" << endl;
                  }
                  else if (average >= B_GRADE && average < A_GRADE)
                  {
                    output_file << "  " << "B" << endl;
                  }
                  else if (average >= C_GRADE && average < B_GRADE)
                  {
                    output_file << "  " << "C" << endl;
                  }
                  else if (average >= D_GRADE && average < C_GRADE)
                  {
                    output_file << "  " << "D" << endl;
                  }
                  else
                  {
                    output_file << "  " << "F" << endl;
                  }
                  
      cout << "Done." << endl;
  }
  output_file.close();
  in_file.close();
  return 0;
}