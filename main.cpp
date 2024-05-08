#include "game.h"
#include "player.hpp"
#include "human_player.hpp"
#include "computer_player.hpp"

using namespace std;

int main()
{
  Board board = Board();
  Board *board_ptr = &board;

  ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
  ConsoleBoardCreator *creator_ptr = &creator;

  Rules rules = Rules(board_ptr);
  Rules *rules_ptr = &rules;

  HumanPlayer player_one = HumanPlayer(&board, 'X');
  HumanPlayer *player_one_ptr = &player_one;
  Player *player_two_ptr;

  cout << "Hello, welcome to tic tac toe!" << endl;
  cout << "Enter a number to chose mode.\n" << endl;
  cout << "1: human vs human" << endl;
  cout << "2: human vs computer\n:";

  string user_input;
  cin >> user_input;

  while (!(stoi(user_input) == 1) && !(stoi(user_input) == 2)) {
    cout << "Please enter a valid input\n\n";
    cout << "Enter a number to chose mode.\n" << endl;
    cout << "1: human vs human" << endl;
    cout << "2: human vs computer\n:";

    cin >> user_input;
  }

  if (stoi(user_input) == 1) {

    player_two_ptr = new HumanPlayer(&board, 'O');

  } else if (stoi(user_input) == 2){

    player_two_ptr = new ComputerPlayer(&board, 'O');
  }

  Game game = Game(board_ptr, rules_ptr, creator_ptr, player_one_ptr, player_two_ptr);
  game.start();


  return 0;
}