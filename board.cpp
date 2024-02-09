#include <iostream>
#include <array>
#include "board.hpp"

using namespace std;

  array<string, 9> board;

  Board::Board() {
    for (int i = 0; i < 9; i++)
    {
      board[i] = '_';
    }
  }

  void Board::make_move(int cell, char mark) {
    board[cell - 1] = mark;
  }

  string Board::get_mark(int cell) {
    return board[cell - 1];
  }
