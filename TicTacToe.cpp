#include <iostream>
#include "TicTacToe.hpp"
#include "Board.hpp"

using namespace std;

TicTacToe::TicTacToe(char firstPlayer)
{
	currentPlayer = firstPlayer;
}

void TicTacToe::play(char player)
{
	int xIn;
	int yIn;
	bool validSpot = true;

	blankBoard.print();

	while(blankBoard.gameOver() == inProgress)
	{

		do
		{
			cout << "Please enter your spot on the x coordinate " << endl;
			cin >> xIn;

			cout << "Please enter your spot on the y coordinate " << endl;
			cin >> yIn;

			validSpot = blankBoard.makeMove(xIn,yIn,currentPlayer);
		}while(!validSpot);
		blankBoard.print();

		//Switches current player
		if(blankBoard.gameOver() == inProgress)
		{
			if (currentPlayer == 'X')
			{
				currentPlayer = 'O';
				cout << "O, it is your turn" << endl;
			}
			else
			{
				currentPlayer = 'X';
				cout<<"X, it is your turn" << endl;
			}
		}

		else if(blankBoard.gameOver() == xWin)
		{
			cout <<"Player X, great job..you win!" << endl;
			break;
		}
		else if(blankBoard.gameOver() == oWin)
		{
			cout << "Player O, great job...you win!" << endl;
			break;
		}
		else
		{
			cout <<"It's a draw" << endl;
		}
	}
}

int main ()
{
	char firstPlayer;


	cout << "Enter the first player X or O" << endl;
	cin >> firstPlayer;

	while(firstPlayer == 'x' || 'X' || 'o' || 'O')
    {
	TicTacToe start(firstPlayer);
	start.play(start.currentPlayer);
    }
	return 0;
}
