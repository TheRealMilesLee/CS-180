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
 * This function is used to create the report
 * @param human
 * @param computer
 * @param draws
 */
void create_report(unsigned number_of_total_games , unsigned
number_of_times_human_player_won, unsigned draw_games);

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


//主程序
int main()
{
  //欢迎界面
  cout << "Welcome to RPS" << endl;
  bool done = false;
  //主循环体
  do
  {
    cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
    calculate_winner(get_human_choice(), get_computer_choice());
  } while (!done);
  
return 0;
}

//获取输入选择
string get_human_choice()
{
  string human_choice;
  cin >> human_choice;
  cout << "Computer Choose" << get_computer_choice() << endl;
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
  unsigned computer_choice = get_rand_in_range(1, 3);
  if (computer_choice == 3)
  {
    return "scissors";
  }
  else if (computer_choice == 2)
  {
    return "paper";
  }
  else
  {
    return "rock";
  }
}

//计算赢家
void
calculate_winner(string human_move, string computer_move)
{
  if (human_move == computer_move)
  {
    cout << "draw" << endl;
  }
  else if (human_move == "scissors" && computer_move == "paper")
  {
    cout << "human_won" << endl;
  }
  else if (human_move == "scissors" && computer_move == "rock")
  {
    cout <<  "computer_won" << endl;
  }
  else if (human_move == "paper" && computer_move == "scissors")
  {
    cout << "computer_won" << endl;
  }
  else if (human_move == "rock" && computer_move == "scissors")
  {
    cout << "human_won" << endl;
  }
  else if (human_move == "paper" && computer_move == "rock")
  {
    cout << "computer_won" << endl;
  }
  else
  {
    cout <<  "something goes wrong" << endl;;
  }
}

//输出到文件
void create_report(unsigned number_of_total_games, unsigned
number_of_times_human_player_won, unsigned draw_games)
{
  ofstream output_file;
  output_file.open("result.txt");
  output_file << "Human" << "  " << number_of_times_human_player_won << endl
              << "Computer" << number_of_total_games -
              number_of_times_human_player_won << endl << "Draws" << "  "
              << draw_games << endl;
  output_file.close();
}

//决定要不要再来一到
bool play_again()
{
  cout << "Wanna Play Again? " ;
  return get_human_choice() != "y";
}

//设置随机数
unsigned get_rand_in_range(unsigned low, unsigned high)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = rand() % (high - low + 1) + low;
  return value;
}
