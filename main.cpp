// #include <iostream>
// #include "board.cpp"
//#include "print_board.h"
#include "game.h"
#include "player.hpp"
#include "human_player.hpp"
#include "computer_player.hpp"
#include "exit_menu.hpp"

int main()
{
  Board board;
  Board *board_ptr = &board;

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  ConsoleBoardCreator *creator_ptr = &creator;

  //cout << creator.formatted_board() << endl;

  Rules rules = Rules(board_ptr);
  Rules *rules_ptr = &rules;

  Player player_one;
  // Player player_two;

  Player *player_one_ptr;// = &player_one;
  Player *player_two_ptr;// = &player_two;

  ExitMenu::start_menu(board_ptr, player_one_ptr, player_two_ptr);

  Game game = Game(board_ptr, rules_ptr, creator_ptr, player_one_ptr, player_two_ptr);
  game.start();


  return 0;
}