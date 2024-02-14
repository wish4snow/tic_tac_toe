#include "game.hpp"
#include <iostream>

using namespace std;

 
 Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr)
  {
    board = board_ptr;
    rules = rules_ptr;
    creator = creator_ptr;
  }

  void Game::start()
  {
    string user_input = "";

    while (rules->in_progress())
    {
      cout << creator->formatted_board();
      cout << "Which cell?" << endl;
      cin >> user_input;
      board->make_move(stoi(user_input), 'X');
    }
  }

