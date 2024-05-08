#include "rules.h"
#include <iostream>
// Board *board;
using namespace std;
Rules::Rules(Board *inputted_board)
{
  this->board = inputted_board;
}

bool Rules::validate_input(int input)
{
     //string current_mark = board->get_mark(input);
  if (input < 1 || input > (board->get_board_size() * board->get_board_size()) || board->get_mark(input) == "O" || board->get_mark(input) == "X") {
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

  int x_count = 0;
  int o_count = 0;

    // checks rows
  for (int i = 0; i < board->get_board_size(); i++) {
        x_count = 0;
    o_count = 0;
    for (int j = board->get_board_size() * i; j <= board->get_board_size() * (i + 1); j++) {
      cout << j;
      if (board->get_mark(j) == "X") {
        x_count++;
      }

      if (board->get_mark(j) == "O") {
        o_count++;
      }
    }

    if (x_count == board->get_board_size()) {
      cout << "from row" << endl;
      return "X";
    }

    if (o_count == board->get_board_size()) {
      cout << "from row" << endl;
      return "O";
    }
    cout << endl;

  }

  for (int i = 1; i <= board->get_board_size(); i++) {
          x_count = 0;
      o_count = 0;
    for (int j = i; j <= (board->get_board_size() * board->get_board_size()) + (-1 * board->get_board_size()) + i; j += board->get_board_size()) {
      cout << j;

      if (board->get_mark(j) == "X") {
        x_count++;
      }

      if (board->get_mark(j) == "O") {
        o_count++;
      }
      cout << ":" << x_count << endl;
      if (x_count == board->get_board_size()) {
        cout << "from col" << endl;
        return "X";
      }

      if (o_count == board->get_board_size()) {
        cout << "from col" << endl;
        return "O";
      }

    }

    cout << endl;

  }
    // if (board->get_mark(1) == board->get_mark(2) && board->get_mark(2) == board->get_mark(3)) {
    //   return board->get_mark(1);
    // } else if (board->get_mark(4) == board->get_mark(5) && board->get_mark(5) == board->get_mark(6)) {
    //   return board->get_mark(4);
    // } else if (board->get_mark(7) == board->get_mark(8) && board->get_mark(8) == board->get_mark(9)) {
    //   return board->get_mark(7);
    // } else if (board->get_mark(1) == board->get_mark(4) && board->get_mark(4) == board->get_mark(7)) {
    //   return board->get_mark(1);
    // } else if (board->get_mark(2) == board->get_mark(5) && board->get_mark(5) == board->get_mark(8)) {
    //   return board->get_mark(5);
    // } else if (board->get_mark(3) == board->get_mark(6) && board->get_mark(6) == board->get_mark(9)) {
    //   return board->get_mark(3);
    // } else if (board->get_mark(1) == board->get_mark(5) && board->get_mark(5) == board->get_mark(9)) {
    //   return board->get_mark(1);
    // } else if (board->get_mark(3) == board->get_mark(5) && board->get_mark(5) == board->get_mark(7)) {
    //   return board->get_mark(3);
    // } 
  return "_";
}

