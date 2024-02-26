#include "rules.h"
#include <iostream>
// Board *board;
using namespace std;
  Rules::Rules(Board *inputted_board)
  {
    board = inputted_board;
  }

  bool Rules::validate_input(int input)
  {
    // string current_mark = board->get_mark(input);
    if (input < 1 || input > 9 || board->get_mark(input) == "O" || board->get_mark(input) == "X") {
      return false;
    }
    return true;
  }

  bool Rules::in_progress() {
    string winner_mark = has_winner();
    if (has_winner() == "_") {
      return true;
    }
    return false;
  }

  string Rules::has_winner() {
    // This is awful, I need a WAY better way to do this in the future.
    // oh well

    if (board->get_mark(1) == board->get_mark(2) && board->get_mark(2) == board->get_mark(3)) {
      return board->get_mark(1);
    } else if (board->get_mark(4) == board->get_mark(5) && board->get_mark(5) == board->get_mark(6)) {
      return board->get_mark(4);
    } else if (board->get_mark(7) == board->get_mark(8) && board->get_mark(8) == board->get_mark(9)) {
      return board->get_mark(7);
    } else if (board->get_mark(1) == board->get_mark(4) && board->get_mark(4) == board->get_mark(7)) {
      return board->get_mark(1);
    } else if (board->get_mark(2) == board->get_mark(5) && board->get_mark(5) == board->get_mark(8)) {
      return board->get_mark(5);
    } else if (board->get_mark(3) == board->get_mark(6) && board->get_mark(6) == board->get_mark(9)) {
      return board->get_mark(3);
    } else if (board->get_mark(1) == board->get_mark(5) && board->get_mark(5) == board->get_mark(9)) {
      return board->get_mark(1);
    } else if (board->get_mark(3) == board->get_mark(5) && board->get_mark(5) == board->get_mark(7)) {
      return board->get_mark(3);
    } 
    return "_";
  }