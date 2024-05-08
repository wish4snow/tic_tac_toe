#include "human_player.hpp"
#include "rules.h"
using namespace std;
HumanPlayer::HumanPlayer(Board *inputted_board, char symbol)
{
  this->board = inputted_board;
  this->symbol = symbol;
}

void HumanPlayer::move(Rules *rules_ptr){

  string user_input = "";
  cout << "Pick a cell\n:";
  cin >> user_input;

  while (!rules_ptr->validate_input(stoi(user_input))) {
  
    // cout << creator->formatted_board();
    cout << "\nTry a diferent input please."<< endl;
    cout << "Pick a cell\n:";

    cin >> user_input;
      }
  board->make_move(stoi(user_input), symbol);
}
