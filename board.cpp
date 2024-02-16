#include <iostream>
#include <array>
#include <string>
#include "board.hpp"

using namespace std;

  Board::Board() {
    for (int i = 0; i < 9; i++)
    {
      this->board[i] = to_string(i + 1);
    }
  }

  void Board::make_move(int cell, char mark){
    this->board[cell - 1] = mark;
  }

  string Board::get_mark(int cell)
  {
    return this->board[cell - 1];
  }

