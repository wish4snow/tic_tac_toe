#include "print_board.hpp"
class ConsoleBoardCreator{
  Board board;

public:
  ConsoleBoardCreator(Board inputted_board)
  {
    board = inputted_board;
  }

  string formatted_board()
  {
    return " " + board.get_mark(1) + " | " + board.get_mark(2) + " |   \n-----------\n   |   |   \n-----------\n   |   |   ";
  }
};
