#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Board {
	
	private:
		int board_size;
		vector<string> board;

	public:
		explicit Board(int board_size = 3);
		void make_move(int cell, char mark);
		string get_mark(int cell);
		void make_empty_board(int board_size = 3);
};