#pragma once

#include "game.h"

class ExitMenu
{
private:
  Game *game;

public:
  ExitMenu(Game *game);
  void execute();
  void start_menu();
};
