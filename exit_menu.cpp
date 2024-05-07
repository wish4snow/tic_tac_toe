#include <iostream>
#include "exit_menu.hpp"

using namespace std;

ExitMenu::ExitMenu(Game *game){
  this->game = game;
}





void ExitMenu::execute()
{
  string user_input;
  cout << "Do you want to play again?" << endl;
  cout << ":";
  cin >> user_input;
  if (user_input == "no" || user_input == "n")
  {
    cout << "Thank you for playing!" << endl;
  }
  else
  {
    game->reset();
    game->start();
  }
}


// void ExitMenu::start_menu(Board *board, Player *player1, Player *player2) {
//   cout << "Hello, welcome to tic tac toe!" << endl;
//   cout << "Enter a number to chose mode.\n" << endl;
//   cout << "1: human vs human" << endl;
//   cout << "2: human vs computer\n\n:";

//   string user_input;

//   cin >> user_input;

//   while (!(stoi(user_input) == 1) && !(stoi(user_input) == 2)) {
//   cout << "Please enter a valid input\n\n";
//   cout << "Enter a number to chose mode.\n" << endl;
//   cout << "1: human vs human" << endl;
//   cout << "2: human vs computer\n\n:";
//     cin >> user_input;
//   }

//   if (stoi(user_input) == 1) {
//     *player1 = HumanPlayer(board, 'X');
//     *player2 = HumanPlayer(board, 'O');
 // }

//}