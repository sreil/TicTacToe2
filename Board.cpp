#include "Board.hpp"
#include <iostream>

using namespace std;


Board::Board() //constructor sets board blank
{
    board[0][0] = '.';
    board[0][1] = '.';
    board[0][2] = '.';
    board[1][0] = '.';
    board[1][1] = '.';
    board[1][2] = '.';
    board[2][0] = '.';
    board[2][1] = '.';
    board[2][2] = '.';
}

bool Board::makeMove(int xIn, int yIn, char userTurn) //check to see if spot is taken or not
{
	if(board[yIn][xIn]=='.')
	{
		board[yIn][xIn]=userTurn;
		return true;
	}
	else
	{
		cout << "That spot was already marked, please try again" << endl;
		return false;
	}
}

gameStatus Board::gameOver() //checks for winner
{
    if (board[0][0]== 'X' && board[1][1]== 'X' && board[2][2]== 'X')
	{
		return xWin;
	}

	else if (board[2][0]== 'X' && board[1][1]== 'X' && board[0][2]== 'X')
	{
		return xWin;
	}

	else if (board[0][0]== 'X' && board[1][0]== 'X' && board[2][0]== 'X')
	{
		return xWin;
	}

	else if (board[0][1]== 'X' && board[1][1]== 'X' && board[2][1]== 'X')
	{
		return xWin;
	}
	else if (board[0][2]== 'X' && board[1][2]== 'X' && board[2][2]== 'X')
	{
		return xWin;
	}
	else if (board[0][0]== 'X' && board[0][1]== 'X' && board[0][2]== 'X')
	{
		return xWin;
	}
	else if (board[1][0]== 'X' && board[1][1]== 'X' && board[1][2]== 'X')
	{
		return xWin;
	}
	else if (board[2][0]== 'X' && board[2][1]== 'X' && board[2][2]== 'X')
	{
		return xWin;
	}
	// O win
	if (board[0][0]== 'O' && board[1][1]== 'O' && board[2][2]== 'O')
	{
		return oWin;
	}

	else if (board[2][0]== 'O' && board[1][1]== 'O' && board[0][2]== 'O')
	{
		return oWin;
	}

	 else if (board[0][0]== 'O' && board[1][0]== 'O' && board[2][0] == 'O')
	{
		return oWin;
	}
	else if (board[0][1]== 'O' && board[1][1]== 'O' && board[2][1]== 'O')
	{
		return oWin;
	}
	else if (board[0][2]== 'O' && board[1][2]== 'O' && board[2][2]== 'O')
	{
		return oWin;
	}
	 else if (board[0][0]== 'O' && board[0][1]== 'O' && board[0][2]== 'O')
	{
		return oWin;
	}
	else if (board[1][0]== 'O' && board[1][1]== 'O' && board[1][2]== 'O')
	{
		return oWin;
	}
	else if (board[2][0]== 'O' && board[2][1]== 'O' && board[2][2]== 'O')
	{
		return oWin;
	}
	//In progress
	else if (board[0][0] == '.' || board[0][1] == '.' || board[0][2] == '.' || board[1][0] == '.' || board[1][1] == '.'
		|| board[1][2] == '.' || board[2][0] == '.' || board[2][1] == '.' || board[2][2] == '.')
	{
		return inProgress;
	}

	else
	{
		return Draw;
	}
}

void Board::print() //loop to keep running tally of board
{
	cout << "  " << '0'<< ' '<< '1' << ' '<<'2' << endl; //displays coordinates
	for(int i =0; i < 3; i++)
	{
		cout << i << ' ';
		for(int j = 0; j < 3; j++)
		{
			cout << board[i][j] << ' ';
		}

	}
}
