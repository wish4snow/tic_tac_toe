// #include <iostream>
// #include <array>
// #include <string>
#include "board.h"

using namespace std;

  Board::Board(int board_size) {
    this->make_empty_board();
  }


  void Board::make_empty_board(int board_size) {
    for (int i = 0; i < board_size * board_size; i++)
    {
      this->board.push_back(to_string(i + 1));
    } 
    this->board_size = board_size;
  }

  void Board::make_move(int cell, char mark){
    this->board[cell - 1] = mark;
  }

  string Board::get_mark(int cell)
  {
    return this->board[cell - 1];
  }

  int Board::get_board_size() {
    return this->board_size;
  }

