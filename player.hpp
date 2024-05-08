#pragma once
#include "rules.h"

class Player
{
public:
  virtual void move(Rules *rules_ptr) = 0;
};
