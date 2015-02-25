#ifndef BOARD_HPP_INCLUDED
#define BOARD_HPP_INCLUDED

enum gameStatus{xWin,oWin,Draw,inProgress}; //enum declaration

class Board
{
	public:
		Board(); //constructor
		bool makeMove(int, int, char);
		gameStatus gameOver();
		void print();

	private:
		char board[3][3]; //for 3 by 3 board

};
#endif // BOARD_HPP_INCLUDED
