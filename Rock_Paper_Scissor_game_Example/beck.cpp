#include <iomanip>
#include <iostream>
#include <fstream>
#include <random>

using namespace std;

/**
 * Prompt for and input a valid choice from a human player
 * @return the choice
 */
string get_human_choice();

/**
 * generate a choice for the computer player
 * @return the choice
 */
string get_computer_choice();

/**
 * Figure out the winner, given two players' moves
 * @param human_choice the first player's move
 * @param ciomputer_choice the second player's move
 * @param winner winner who win
 */
void calculate_winner(string human_choice, string ciomputer_choice, string&
winner);

/**
 * Write the results of a game to a file, given the statistics of game
 * @param total_game how many games were played
 * @param human_wins how many games the human won
 * @param draws how many games were tie game
 */
void create_report(unsigned total_game, unsigned human_wins, unsigned draws);

/**
 * Prompt for and determine whether the user wants to play again or not
 * @return the decision of whether to play again or not
 */
bool play_again();

/**
 * Get a random value between low and high.
 * @param low the smallest random value
 * @param high the largest randome value
 * @return a random value between the low and high
 */
unsigned get_rand_in_range(unsigned low, unsigned high);

int main()
{

}