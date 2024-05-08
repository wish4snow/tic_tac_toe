#pragma once
#include "board.h"
#include "player.hpp"
#include "rules.h"

class HumanPlayer : public Player
{
private:
  Board *board;
  char symbol;

public:
  HumanPlayer(Board *inputted_board, char symbol);
  void move(Rules *rules_ptr) override;
};
