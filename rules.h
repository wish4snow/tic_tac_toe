#pragma once
#include "print_board.h"
#include "board.h"

class Rules {
  private:
    Board *board;

  public:
    Rules(Board *inputted_board);
    bool validate_input(int input);
    bool in_progress();
    string has_winner();

};