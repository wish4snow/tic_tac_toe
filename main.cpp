#include <iostream>
// #include "board.cpp"
#include "print_board.h"
int main()
{
  Board board;
  Board *board_ptr = &board;

  board.make_move(1, 'X');
  board.make_move(2, 'O');
  board.make_move(3, 'X');
  // board.make_move(4, 'O');
  // board.make_move(5, 'O');
  // board.make_move(6, 'O');
  // board.make_move(7, 'O');
  // board.make_move(8, 'O');
  // board.make_move(9, 'O');

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  ConsoleBoardCreator *creator_ptr = &creator;

  cout << creator.formatted_board() << endl;
  return 0;
}