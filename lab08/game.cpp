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
void calculate_winner(const string& human_move, const string& computer_move, string
&result);

/**
 * This Function is used to create the report
 * @param number_of_total_games use to get the numbers of total games  
 * @param number_of_times_human_player_won use to get the times that human won
 * @param draw_games use to get the draw games
 */
void create_report(unsigned total_games, unsigned human_win_total,
                   unsigned draw_games);

/**
 * This function is used to decided this game will go on or not
 * @return
 */
bool play_again();

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
  bool done = false;
  unsigned total = 0;
  unsigned human_won = 0;
  unsigned draw = 0;
  //主循环体
  while (!done)
  {
    cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
    string human_move = get_human_choice();
    string computer_move = get_computer_choice();
    calculate_winner(human_move, computer_move,
                     create_report(total, human_won, draw));
    play_again();
    total++;
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
    cout << "Invalid Choice" << endl;
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
void calculate_winner(const string& human_move, const string& computer_move, string
&result)
{
  cout << " In  calculate winner " << human_move << "  " << computer_move
       << endl;
  if (human_move == computer_move)
  {
    result = "draw";
    //draw++;
  }
  else if (human_move == "scissors" && computer_move == "paper")
  {
    result = "human_won";
    //human_won++;
  }
  else if (human_move == "scissors" && computer_move == "rock")
  {
    result = "computer_won";
  }
  else if (human_move == "paper" && computer_move == "scissors")
  {
    result = "computer_won";
  }
  else if (human_move == "paper" && computer_move == "rock")
  {
    result = "computer_won";
  }
  else if (human_move == "rock" && computer_move == "scissors")
  {
    result = "human_won";
  }
  else if (human_move == "rock" && computer_move == "paper")
  {
    result = "human win ";
  }
  else
  {
    result = "something goes wrong";
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
  ofstream output_file;
  output_file.open("result.txt");
  output_file << "Human" << "  " << human_win_total << endl << "Computer"
              << total_games - human_win_total << endl << "Draws" << "  "
              << draw_games << endl;
  output_file.close();
}

//决定要不要再来一到
bool play_again()
{
  cout << "Play again? (y or n): ";
  if (get_human_choice() == "y")
  {
    return true;
  }
  else
  {
    return false;
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
