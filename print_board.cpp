#include "print_board.hpp"

  Board board;

  ConsoleBoardCreator::ConsoleBoardCreator(Board inputted_board)
  {
    this->board = inputted_board;
  }

  string ConsoleBoardCreator::formatted_board()
  {
    return " " + this->board.get_mark(1) + " | " + this->board.get_mark(2) + " |   \n-----------\n   |   |   \n-----------\n   |   |   ";
  }

int main () {
  return 0;
}
