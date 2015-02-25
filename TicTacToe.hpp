#ifndef TICTACTOE_HPP_INCLUDED
#define TICTACTOE_HPP_INCLUDED

#include "Board.hpp"


class TicTacToe
{
	private:
		Board blankBoard;

	public:
		char currentPlayer;
		TicTacToe(char);
		void play(char);
};

#endif // TICTACTOE_HPP_INCLUDED
