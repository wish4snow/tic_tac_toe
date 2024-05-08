#pragma once
#include "board.h"
#include "player.hpp"

class ComputerPlayer : public Player
{
private:
  Board *board;
  char symbol;

public:
  ComputerPlayer(Board *inputted_board, char symbol);
  void move(Rules *rules_ptr) override;
};
