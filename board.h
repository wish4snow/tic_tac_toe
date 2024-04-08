#pragma once
#include <string>
#include <array>
#include <iostream>

using namespace std;

class Board {
	
	private:
		array<string, 9> board;

	public:
		explicit Board();
		void make_move(int cell, char mark);
		string get_mark(int cell);
		void make_empty_board();
};