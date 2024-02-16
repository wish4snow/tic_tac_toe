#include "game.h"
#include <iostream>

using namespace std;

 
 Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr)
  {
    this->board = board_ptr;
    this->rules = rules_ptr;
    this->creator = creator_ptr;
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

