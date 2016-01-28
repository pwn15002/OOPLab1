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


	}
	return 0;
}