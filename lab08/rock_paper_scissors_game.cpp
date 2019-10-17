//Hengyi Li
//This Program is to play the rock scissors and papaer game
//This Program finished by Hengyi Li on 11：20 AM, 5 Oct, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <istream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
/**
 * This function is used to get the human's choice
 * @return
 */
string get_human_choice();
/**
 * This function is used to get the computer choice
 * @return
 */
string get_computer_choice();
/**
 * This function is used to calculate the winner
 * @param computer_win a variable for computer win
 * @param human_win a variable for human win
 * @param winner a vairable for the final winner
 */
void calculate_winner(string human, string computer, string& draws);
/**
 * This function is used to create the report
 * @param human
 * @param computer
 * @param draws
 */
void create_report(unsigned human, unsigned computer, unsigned draws);
/**
 * This function is used to decided this game will go on or not
 * @return
 */
bool play_again();
/**
 * This function is to get random choice for the computer choice
 * @param MAX
 * @param MIN
 * @return
 */
unsigned int get_rand_in_range(unsigned low, unsigned high);

int main()
{
  get_human_choice();
  string choice =  get_computer_choice();
  do
  {
    calculate_winner();
    create_report();
    play_again();
  }while(choice == "r" || "p" || "s" );
  return 0;
}

string get_human_choice()
{
  string human_choice;
  cin >> human_choice;
  return human_choice;
}
string get_computer_choice()
{
 unsigned computer_choice = get_rand_in_range(1,3);
 if (computer_choice == 3)
 {
   return "scissors";
 }
 else if(computer_choice == 2)
 {
   return "paper";
 }
 else
 {
   return "rock";
 }
}

void calculate_winner(string human_win, string computer_win, string& decide_who_win)
{
  unsigned computer_choice = get_rand_in_range(1,3);
  get_human_choice();
  if ( get_human_choice() == "s")
  {
    unsigned human_choice = 1;
    if (human_choice < computer_choice)
    {
      cout << "Computer won. Better luck next time.";
    }
    else if (human_choice == computer_choice)
    {
      cout << "No winner; it was a draw.";
    }
    else
    {
      cout << "Human won. Congratulations!";
    }
    
  }
  else if (get_human_choice() == "p")
  {
    unsigned human_choice = 2;
    if (human_choice < computer_choice)
    {
      cout << "Computer won. Better luck next time.";
    }
    else if (human_choice == computer_choice)
    {
      cout << "No winner; it was a draw.";
    }
    else
    {
      cout << "Human won. Congratulations!";
    }
  }
  else
  {
    unsigned human_choice = 3;
    if (human_choice < computer_choice)
    {
      cout << "Computer won. Better luck next time.";
    }
    else if (human_choice == computer_choice)
    {
      cout << "No winner; it was a draw.";
    }
    else
    {
      cout << "Human won. Congratulations!";
    }
  }
  
  

}

void create_report(unsigned human, unsigned computer, unsigned draws)
{
  ofstream output_file;
  output_file.open("result.txt");
  output_file << "Human" << "  " << human << endl << "Computer" << computer
  << endl << "Draws" << "  "  << draws << endl;
}

bool play_again()
{
  string decision = get_human_choice();

  if (decision == "Y")
  {
    return false;
  }
  else
  {
    return true;
  }

}

unsigned get_rand_in_range(unsigned low, unsigned high)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = static_cast<unsigned>(rand()) % (high - low + 1) + low;
  return value;
}
