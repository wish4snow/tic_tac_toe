#pragma once

#include "game.h"

#include "player.hpp"
#include "human_player.hpp"

class ExitMenu
{
private:
  Game *game;

public:
  ExitMenu(Game *game);
  void execute();
  //static void start_menu(Board *board, Player *player1, Player *player2);
};
