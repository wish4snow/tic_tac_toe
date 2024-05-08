#include "game.h"
#include "exit_menu.hpp"
#include <iostream>

using namespace std;

 
 Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr, Player *player_one_ptr, Player *player_two_ptr)
  {
    board = board_ptr;
    rules = rules_ptr;
    creator = creator_ptr;
    player_one = player_one_ptr;
    player_two = player_two_ptr;
    current_player = player_one;
  }

  void Game::start() {

    string user_input = "";
    int turn_number = 0;
    int player_number;

    while (rules->in_progress()) {

      if (turn_number % 2 == 0) {
        player_number = 1;

      } else {
        player_number = 2;

      }

      cout << "\n" << creator->formatted_board();
      

      cout << "\nWhich cell would you like to pick, Player " << player_number << "?" << endl;
      current_player->move(rules);
      switch_player();


      if (!rules->in_progress()) {
        cout << "\n" << creator->formatted_board() << endl;
        cout << "Good job Player " << player_number << "!\nYou have won this game!" << endl;
        break;
      }

      turn_number ++;
      
      if (turn_number >= (board->get_board_size() * board->get_board_size())) {
        cout << "Tie game." << endl;
        break;
      }
    }

    ExitMenu(this).execute();

  }

    void Game::reset(){
      cout << "hello\n";
      board->make_empty_board();
      current_player = player_one;
    }

void Game::switch_player() {

  if (current_player == player_one) {
    current_player = player_two;
  } else{
    current_player = player_one;
  }
  
}