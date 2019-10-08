//Program PUPOSE
//NAME

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const unsigned HIGHEST_SCORE = 100;
  const unsigned LOWEST_SCORE = 0;

  ifstream input_file;
  input_file.open("../scores.txt");

  unsigned number_of_scores;
  input_file >> number_of_scores;
  cout <<"The number is: " << number_of_scores << endl;

  string dummy;
  getline(input_file, dummy);
  cout <<"The dummy is: "<< dummy << endl;

  string name;
  while (getline(input_file, name))
  {
    cout << "The Name Is: " << name << endl;

    unsigned score_sum = 0;
    unsigned highest_score = LOWEST_SCORE;
    unsigned lowest_score = HIGHEST_SCORE;
    for (unsigned loop_times = 0;loop_times < number_of_scores; loop_times++)
    {
      unsigned score;
      input_file >> score;
      if(score > lowest_score)
      {
        lowest_score = score;
      }
      if (loop_times == 0)
      {
        highest_score = score;
        cout << "First Highest Score: " << highest_score << endl;
      }
      else
      {
        if (score > highest_score)
        {
          highest_score = score;
          cout << "Found A Higher Score: " << highest_score << endl;
        }
      }

      score_sum += score;
      cout << "The Scores Are: " << score  << endl;
    }
    cout << "The Sum Is: " << score_sum << endl;
    double average = static_cast<double>(score_sum) / number_of_scores;
    cout << "The Average Is: " << average << endl;
    getline(input_file, dummy);
  }
  input_file.close();
  return 0;
}