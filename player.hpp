#pragma once
#include "rules.h"

class Player
{
public:
  // Player();
  virtual void move(Rules *rules_ptr) = 0;
};
