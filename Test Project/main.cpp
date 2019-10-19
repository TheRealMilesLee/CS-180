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
 * @param human_move use for human's move
 * @param computer_move use for computer's move
 * @param result use to decide the result
 */
void calculate_winner(string human_move, string computer_move);

/**
 * This Function is used to create the report
 * @param number_of_total_games use to get the numbers of total games
 * @param number_of_times_human_player_won use to get the times that human won
 * @param draw_games use to get the draw games
 */
void create_report(unsigned total, unsigned human_won,
                   unsigned draw);

/**
 * This function is to get random choice for the computer choice
 * @param low to get the lowest number
 * @param high to get the hightest number
 * @return
 */
unsigned int get_rand_in_range(unsigned low, unsigned high);

/**
 * This function is used to decided the program will go on or not
 * @return
 */
bool play_again();
//主程序
int main()
{
  //欢迎界面
  cout << "Welcome to RPS" << endl;
  bool done = false;
  while (!done)
  {
    cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
    string human_move = get_human_choice();
    string computer_move = get_computer_choice();
    string result;
    unsigned total = 0;
    unsigned human_won = 0;
    unsigned computer_won = 0;
    unsigned draw = 0;
    unsigned human = 0;
    unsigned computer = 0;
    unsigned final_total = 0;
    unsigned draw_game = 0;
    cout << "In  calculate winner: " << human_move << "  " << computer_move
         << endl;
    if (human_move == computer_move)
    {
      cout << "No winner; it was a draw." << endl;
      result = "draw";
    }
    else if (human_move == "scissors" && computer_move == "paper")
    {
      cout << "Human won. Congratulations!" << endl;
      result = "human_won";
    }
    else if (human_move == "scissors" && computer_move == "rock")
    {
      cout << "Computer won. Better luck next time." << endl;
      result = "computer_won";
    }
    else if (human_move == "paper" && computer_move == "scissors")
    {
      cout << "Computer won. Better luck next time." << endl;
      result = "computer_won";
    }
    else if (human_move == "paper" && computer_move == "rock")
    {
      cout << "Computer won. Better luck next time." << endl;
      result = "computer_won";
    }
    else if (human_move == "rock" && computer_move == "scissors")
    {
      cout <<"Human won. Congratulations!" << endl;
      result = "human_won";
    }
    else if (human_move == "rock" && computer_move == "paper")
    {
      cout << "Human won. Congratulations! " << endl;
      result = "human_won";
    }

    if (result == "human_won")
    {
      human = ++human_won;
    }
    else if(result == "computer_won")
    {
      computer = ++computer_won;
    }
    else
    {
      draw_game = ++draw;
    }
    final_total = ++total;
    const unsigned WIDTH = 25;
    ofstream output_file;
    output_file.open("../result.txt");
    output_file <<"Total" << setw(WIDTH) << final_total << endl << "Human" <<
    setw (WIDTH) << human << endl <<"Computer" <<setw(WIDTH) << computer
        << endl << "Draws" <<setw(WIDTH) << draw_game << endl;
    output_file.close();
    string choose;
    cout << "Play again? (y or n): ";
    cin >> choose;
    done = choose == "n";
  }
  return 0;
}
//获取输入选择
string get_human_choice()
{
  string human_choice;
  cin >> human_choice;
  cout << "Computer Choose " << get_computer_choice() << endl;
  if (human_choice == "s")
  {
    return "scissors";
  }
  else if (human_choice == "p")
  {
    return "paper";
  }
  else if (human_choice == "r")
  {
    return "rock";
  }
  else
  {
    return "Invalid Choice";
  }
}
//获取电脑选择
string get_computer_choice()
{
  const unsigned MIN_NUMBER = 1;
  const unsigned MAX_NUMBER = 3;
  unsigned computer_choice = get_rand_in_range(MIN_NUMBER, MAX_NUMBER);
  if (computer_choice == MAX_NUMBER)
  {
    return "scissors";
  }
  else if (computer_choice == MIN_NUMBER)
  {
    return "rock";
  }
  else
  {
    return "paper";
  }
}
//设置随机数
unsigned get_rand_in_range(unsigned low, unsigned high)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = rand() % (high - low + 1) + low;
  return value;
}