#include "game.h"
#include <iostream>

using namespace std;

 
 Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr)
  {
    this->board = board_ptr;
    this->rules = rules_ptr;
    this->creator = creator_ptr;
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
      cin >> user_input;

      while (!rules->validate_input(stoi(user_input))) {
        
        cout << creator->formatted_board();
        cout << "\nTry a diferent input please."<< endl;
        cout << "Which cell would you like to pick, Player " << player_number << "?" << endl;
        cin >> user_input;
      }

      if (turn_number % 2 == 0) {
        board->make_move(stoi(user_input), 'X');
      } else {
        board->make_move(stoi(user_input), 'O');
      }

      if (!rules->in_progress()) {
        cout << "\n" << creator->formatted_board() << endl;
        cout << "Good job Player " << player_number << "!\nYou have won this game!" << endl;
      }

      turn_number ++;
      
      if (turn_number >= 9) {
        cout << "Tie game." << endl;
        break;
      }
    }
  }

