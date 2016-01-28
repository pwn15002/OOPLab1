#include <iostream>
#include <conio.h>
#include "Board.h"

using namespace std;

int main() {

	Board board;

	while (true)
	{

		board.printBoard();

		board.makeMove(_getch());

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