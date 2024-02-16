#include "board.cpp"


class ConsoleBoardCreator {
	private:
		Board *board;
		
	public :
		ConsoleBoardCreator(Board inputted_board);
		string formatted_board();
};