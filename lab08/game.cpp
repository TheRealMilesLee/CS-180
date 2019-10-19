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
void create_report(unsigned total_games, unsigned human_win_total,
                   unsigned draw_games);

/**
 * This function is to get random choice for the computer choice
 * @param low to get the lowest number
 * @param high to get the hightest number
 * @return
 */
unsigned int get_rand_in_range(unsigned low, unsigned high);


//主程序
int main()
{
  //欢迎界面
  cout << "Welcome to RPS" << endl;
  unsigned total = 0;
  unsigned human_won = 0;
  unsigned draw = 0;
  bool done = false;
  //主循环体
  while (!done)
  {
    cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
    string human_move = get_human_choice();
    string computer_move = get_computer_choice();
    calculate_winner(human_move, computer_move);
    total++;
    string choose;
    cout << "Play again? (y or n): ";
    cin >> choose;
    if (choose == "n")
    {
      done = true;
    }
    else
    {
      done = false;
    }
  }
  create_report(total, human_won, draw);
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
//计算赢家
void calculate_winner(string human_move, string computer_move)
{
  cout << "In  calculate winner: " << human_move << "  " << computer_move
       << endl;
  if (human_move == computer_move)
  {
    cout << "draw" << endl;
    //draw++;
  }
  else if (human_move == "scissors" && computer_move == "paper")
  {
    cout << "human_won" << endl;
    //human_won++;
  }
  else if (human_move == "scissors" && computer_move == "rock")
  {
    cout << "computer_won" << endl;
  }
  else if (human_move == "paper" && computer_move == "scissors")
  {
    cout << "computer_won" << endl;
  }
  else if (human_move == "paper" && computer_move == "rock")
  {
    cout << "computer_won" << endl;
  }
  else if (human_move == "rock" && computer_move == "scissors")
  {
    cout <<"human_won" << endl;
  }
  else if (human_move == "rock" && computer_move == "paper")
  {
    cout << "human win " << endl;
  }
  else
  {
    cout << "Invalid Choice" << endl;
  }
}
//输出到文件
void create_report(unsigned total_games, unsigned
human_win_total, unsigned draw_games)
{
  /**
  human_win_total = human_won;
  total_games = total;
  draw_games = draw;
  */
  const unsigned WIDTH = 10;
  ofstream output_file;
  output_file.open("../result.txt");
  output_file << "Human" << setw(WIDTH) << human_win_total << endl <<
  "Computer" <<setw(WIDTH) << total_games - human_win_total << endl <<
  "Draws" <<setw(WIDTH) << draw_games << endl;
  output_file.close();
}
//设置随机数
unsigned get_rand_in_range(unsigned low, unsigned high)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = rand() % (high - low + 1) + low;
  return value;
}

