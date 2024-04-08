#include <iostream>
// #include "board.cpp"
//#include "print_board.h"
#include "game.h"
#include "player.hpp"
#include "human_player.hpp"
#include "computer_player.hpp"
int main()
{
  Board board;
  Board *board_ptr = &board;

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  ConsoleBoardCreator *creator_ptr = &creator;

  //cout << creator.formatted_board() << endl;

  Rules rules = Rules(board_ptr);
  Rules *rules_ptr = &rules;

  HumanPlayer player_one = HumanPlayer(&board, 'X');
  ComputerPlayer player_two = ComputerPlayer(&board, 'O');

  Game game = Game(board_ptr, rules_ptr, creator_ptr, &player_one, &player_two);
  game.start();


  return 0;
}