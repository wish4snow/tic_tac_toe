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
      
      if (board->get_mark(j) == "X") {
        x_count++;
      }

      if (board->get_mark(j) == "O") {
        o_count++;
      }
    }

    if (x_count == board->get_board_size()) {
      return "X";
    }

    if (o_count == board->get_board_size()) {
      return "O";
    }
    

  }

  for (int i = 1; i <= board->get_board_size(); i++) {
          x_count = 0;
      o_count = 0;
    for (int j = i; j <= (board->get_board_size() * board->get_board_size()) + (-1 * board->get_board_size()) + i; j += board->get_board_size()) {

      if (board->get_mark(j) == "X") {
        x_count++;
      }

      if (board->get_mark(j) == "O") {
        o_count++;
      }
      
      if (x_count == board->get_board_size()) {
        return "X";
      }

      if (o_count == board->get_board_size()) {
        return "O";
      }

    }


  }
         x_count = 0;
      o_count = 0;

  for (int i = 0; i < board->get_board_size(); i++){
    if (board->get_mark((i + 1) + (i * board->get_board_size())) == "X") {
      x_count++;
    }
        if (board->get_mark((i + 1) + (i * board->get_board_size())) == "O") {
      o_count++;
    }
  }

        if (x_count == board->get_board_size()) {
        return "X";
      }

      if (o_count == board->get_board_size()) {
        return "O";
      }

        x_count = 0;
      o_count = 0;

  for (int i = 0; i < board->get_board_size(); i++){
    if (board->get_mark(((i + 1) * board->get_board_size()) - i) == "X") {
      x_count++;
    }
        if (board->get_mark(((i + 1) * board->get_board_size()) - i) == "O") {
      o_count++;
    }
  }

        if (x_count == board->get_board_size()) {
        return "X";
      }

      if (o_count == board->get_board_size()) {
        return "O";
      }

  return "_";
}

