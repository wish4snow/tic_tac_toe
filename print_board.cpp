#include "print_board.h"

  //Board *board;
  using namespace std;

  ConsoleBoardCreator::ConsoleBoardCreator(Board *inputted_board)
  {
    this->board = inputted_board;
  }

  string ConsoleBoardCreator::formatted_board() {

    string printed_board;
    int counter = 1;
    

    for (int i = 0; i < this->board->get_board_size() - 1; i++) {
     
      printed_board += "  ";
      
      for (int j = 0; j < this->board->get_board_size() - 1; j++) {

        printed_board += this->board->get_mark(counter);
        printed_board += " | ";
        counter++;
        
      }

      printed_board += this->board->get_mark(counter);
      printed_board += "\n ";
      counter++;

      for (int k = 0; k < (3 * this->board->get_board_size()) + 2; k++) {
        printed_board += "-";
      }

      printed_board += "\n";
    }

          printed_board += "  ";
      
      for (int j = 0; j < this->board->get_board_size() - 1; j++) {

        printed_board += this->board->get_mark(counter);
        printed_board += " | ";
        counter++;
        
      }

      printed_board += this->board->get_mark(counter);
      printed_board += "\n";

    return printed_board;
  }

