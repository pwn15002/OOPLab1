#include <iostream>
#include <conio.h>
#include <string>
#include "Board.h"

using namespace std;

int main() {

	Board board;
	char userInput = NULL;

	while (true)
	{

		board.printBoard();

		userInput = _getch();

		switch (userInput)
		{
		case 'w':
		case 'W':
			board.moveUp();
			break;
		case 's':
		case 'S':
			board.moveDown();
			break;
		case 'a':
		case 'A':
			board.moveLeft();
			break;
		case 'd':
		case 'D':
			board.moveRight();
			break;
		default:
			break;
		}

		system("cls");
		if (board.isSorted() == true)
		{
			break;
		}

	}
	board.printBoard();
	cout << "You Won!";

	_getch();
	return 0;
}