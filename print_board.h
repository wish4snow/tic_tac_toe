#include "board.h"


class ConsoleBoardCreator {
	private:
		Board *board;
		
	public :
		ConsoleBoardCreator(Board *inputted_board);
		string formatted_board();
};