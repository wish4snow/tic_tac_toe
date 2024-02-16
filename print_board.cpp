// #include "print_board.hpp"
#include "print_board.h"

  //Board *board;

  ConsoleBoardCreator::ConsoleBoardCreator(Board *inputted_board)
  {
    this->board = inputted_board;
  }

  string ConsoleBoardCreator::formatted_board()
  {
    return "  " + this->board->get_mark(1) + " | " + this->board->get_mark(2) + " | " + this->board->get_mark(3) + "\n" +
    
    " ----------- " + "\n  " +

    this->board->get_mark(4) + " | " + this->board->get_mark(5) + " | " + this->board->get_mark(6) + "\n" +
    
    " ----------- " + "\n  " +

    this->board->get_mark(7) + " | " + this->board->get_mark(8) + " | " + this->board->get_mark(9);
  }

