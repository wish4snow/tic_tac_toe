#pragma once
#include "rules.h"
#include "player.hpp"

class Game {
	private:
		Board *board;
		Rules *rules;
		ConsoleBoardCreator *creator;
  		Player *player_one;
  		Player *player_two;
  		Player *current_player;
  		void switch_player();

	public:
		Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr, Player *player_one_ptr, Player *player_two_ptr);
		void start();
		void reset();
};