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
		void make_empty_board(int board_size = 3);
		string get_mark(int cell);
		int get_board_size();
};