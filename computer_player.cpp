#include "computer_player.hpp"
// #include "board.h"
#include <cstdlib>

using namespace std;
ComputerPlayer::ComputerPlayer(Board *inputted_board, char symbol){
  this->board = inputted_board;
  this->symbol = symbol;
}

void ComputerPlayer::move(Rules *rules_ptr){
  int number = (rand() % ((board->get_board_size() * board->get_board_size()) + 1));
  
  while (!rules_ptr->validate_input(number)){
    number = (rand() % ((board->get_board_size() * board->get_board_size()) + 1));
    cout << number << endl;
  }

  board->make_move(number, symbol);
}
