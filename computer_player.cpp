#include "computer_player.hpp"
// #include "board.h"
#include <cstdlib>

using namespace std;
ComputerPlayer::ComputerPlayer(Board *inputted_board, char symbol){
  this->board = inputted_board;
  this->symbol = symbol;
}

void ComputerPlayer::move(){
  int number = (rand() % (9 - 0 + 1)) + 0;
  
  // while (get_mark(number) != 'X' || get_mark(number) != 'O'){
  //   int number = (rand() % (9 - 0 + 1)) + 0;
  // }

  board->make_move(number, symbol);
}
