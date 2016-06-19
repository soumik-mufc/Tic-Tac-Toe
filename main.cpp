/* TIC TAC TOE V 1.0 ( Currently will run only on ios and linux)
 * -------------------------------------------------------------------------------------------------
 * main.cpp by Soumik Chatterjee.
 * This is a tic-tac-toe game played between two players (player X and player O).
 * Player X always starts the game.
 * The board is represented as a 3*3 board like this::::
 * 
 *  1 | 2 | 3
 * ---|---|---
 *  4 | 5 | 6
 * ---|---|---
 *  7 | 8 | 9
 * 
 * A player plays his turn by choosing the number where he wants to place his X or O.
 * 
 * A player wins if he places them consecutively row wise or column wise or diagonally, else it's a draw.
 * 
 * Copyright 2016 @ Soumik Chatterjee.
 * 
 * --------------------------------------------------------------------------------------------------------
 * 
 * */
 
#include <iostream>
#include <cstdlib>
#define SIZE 3
using namespace std;
char board[SIZE][SIZE] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };  // represents the tic-tac-toe board.
char player = 'X';           // represents the two players. X-> first player.... O-> second player.
int n = 0;                   // No of turns currently over.
void draw()
{
	system("clear");
    cout << "Tic Tac Toe v1.0" << endl << endl;
	for( int i = 0; i < SIZE; i++)
	{
		for( int j = 0; j < SIZE; j++)
		{
			
			cout << " " << board[i][j] << " ";
			if( j < 2)
				cout << "|";
		}
		cout << endl;
		if( i < 2)
		{
			cout << "---|---|---" << endl;
		}
	}
	cout << endl;
}

void input()
{
	int x;
	cout << endl << endl << "It's " << player << " turn. Press the number on the field : " ;
	cin >> x;
	if( x == 1)
	{
		if(board[0][0] == '1')
			board[0][0] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;
			input();
		}
	}
	else if( x == 2)
	{
		if(board[0][1] == '2')
			board[0][1] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;
			input();
		}
	}
	else if( x == 3)
	{
		if(board[0][2] == '3')
			board[0][2] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else if( x == 4)
	{
		if(board[1][0] == '4')
			board[1][0] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else if( x == 5)
	{
		if(board[1][1] == '5')
			board[1][1] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else if( x == 6)
	{
		if(board[1][2] == '6')
			board[1][2] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else if( x == 7)
	{
		if(board[2][0] == '7')
			board[2][0] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else if( x == 8)
	{
		if(board[2][1] == '8')
			board[2][1] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else if( x == 9)
	{
		if(board[2][2] == '9')
			board[2][2] = player;
		else
		{
			cout << "Field already in use. Try again." << endl << endl;;
			input();
		}
	}
	else
	{
		cout << "Wrong choice entered. Try again. " << endl << endl;;
		input();
	}
}

void changeplayer()
{
	if( player == 'X')
		player = 'O';
	else
		player = 'X';
}

char win()
{
	//first player
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
        return 'X';
    if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
        return 'X';
    if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
        return 'X';
 
    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
        return 'X';
    if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
        return 'X';
    if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
        return 'X';
 
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        return 'X';
    if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
        return 'X';
 
    //second player
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
        return 'O';
    if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
        return 'O';
    if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
        return 'O';
 
    if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
        return 'O';
    if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
        return 'O';
    if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
        return 'O';
 
    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
        return 'O';
    if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
        return 'O';
 
    return '/';
}
int main()
{
	draw();
	while (1)
	{
		input();
		n++;
		draw();
		if (win() == 'X')
        {
            cout << endl << endl << "X wins!" << endl;
            break;
        }
        else if (win() == 'O')
        {
            cout << endl << endl << "O wins!" << endl;
            break;
        }
        else if (win() == '/' && n == 9)
        {
            cout << endl << endl << "It's a draw!" << endl;
            break;
        }
        changeplayer();
	}
	cout << endl << endl << "Game Over !!!!" << endl << endl;
	return 0;
}
