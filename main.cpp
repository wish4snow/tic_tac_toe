#include <iostream>
// #include "board.cpp"
#include "print_board.cpp"
int main()
{
  Board board;
  Board *board_ptr = &board;

  board.make_move(1, 'X');
  board.make_move(3, 'O');
  board.make_move(5, 'X');
  board.make_move(7, 'O');

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  //ConsoleBoardCreator *creator_ptr = &creator;

  return 0;
}