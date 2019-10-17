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
void calculate_winner(string human_move, string computer_move, string& result);
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





//主程序
int main()
{
  cout << "Welcome to RPS";
  
  
  bool done = false;
  while (!done)
  {
    cout << "Choose (r)ock, (p)aper, or (s)cissors: ";
    get_human_choice();
    string human_choice = get_human_choice();
    if (human_choice == "r" || "p" || "s")
    {
      calculate_winner();
      create_report(human, computer, draws);
      play_again();
    }
    else
    {
      cout << "Invalid choice" ;
    }
  }
  return 0;
}

//获取输入选择
string get_human_choice()
{
  string human_choice;
  cin >> human_choice;
  return human_choice;
}
//获取电脑选择
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

//计算赢家
void calculate_winner(string human_move, string computer_move, string& result)
{
    unsigned computer_choice = get_rand_in_range(1,3);
    string human_choice = get_human_choice();

    if(human_choice == "s" && get_computer_choice = "scissors")
    {  
      result =  "Computer won. Better luck next time."; 
    }
    else if (get_human_choice() == "p")
    {

    }
    else
    {
    
    }

    unsigned scissors = 1;
    unsigned paper = 2;
    unsigned rock = 3;


    if (human_choice = scissors && computer_choice = scissors)
    {
      result = "draw";
    }
    else if (human_choice = scissors && computer_choice = paper)
    {
      result = "human_won";
    }
    else if (human_choice = scissors && computer_choice = rock)
    {
      result = "computer_won";
    }
    else if (human_choice = paper && computer_choice = scissors)
    {
      result = "computer_won";
    }
    else if (human_choice = rock && computer_choice = scissors)
    {
      result = "human_won";
    }
    else if (human_choice = paper && computer_choice = rock)
    {
      result = "computer_won";
    }
    else if (human_choice = rock && computer_choice = paper)
    {
      result = "human_won";
    }
    else if (human_choice = paper && computer_choice = paper)
    {
      result = "draw";
    }
    else
    {
      result = "draw";
    }
}

//输出到文件
void create_report(unsigned human, unsigned computer, unsigned draws)
{
  ofstream output_file;
  output_file.open("result.txt");
  output_file << "Human" << "  " << human << endl << "Computer" << computer
  << endl << "Draws" << "  "  << draws << endl;
}

//决定要不要再来一到
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

//设置随机数
unsigned get_rand_in_range(unsigned low, unsigned high)
{
  auto seed = static_cast<unsigned int>(time(nullptr));
  srand(seed);
  unsigned value = static_cast<unsigned>(rand()) % (high - low + 1) + low;
  return value;
}
