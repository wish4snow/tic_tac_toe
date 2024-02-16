#include <iostream>
// #include "board.cpp"
//#include "print_board.h"
#include "game.h"
int main()
{
  Board board;
  Board *board_ptr = &board;

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  ConsoleBoardCreator *creator_ptr = &creator;

  //cout << creator.formatted_board() << endl;

  Rules rules = Rules(board_ptr);
  Rules *rules_ptr = &rules;

  Game game = Game(board_ptr, rules_ptr, creator_ptr);
  game.start();


  return 0;
}