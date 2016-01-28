#include <iostream>
#include <string>

#include "Board.h"

using namespace std;

Board::Board()
{
	size = 4;
	blocks = new Block[size*size];

	for (int i = 0; i < (size*size); i++)
	{
		blocks[i].value = i;
	}

	randomizeBoard();
}

void Board::printBoard()
{
	string spacer;

	for (int i = 0; i < (size*size); i++)
	{
		
		if (blocks[i].value / 10 <= 0)
			spacer = " ";
		else
			spacer = "";
		
		if (blocks[i].value == 0)
			cout << "[" << spacer << spacer << "]";
		else
			cout << "[" << spacer << blocks[i].value << "]";

		if ((i%size) == size - 1)
			cout << endl;
	}
}


void Board::randomizeBoard()
{
	srand(NULL);
	int numOfSwaps = 100;
	int indexRange = size*size;

		for (int i = 0; i < numOfSwaps; i++)
		{
			swap(rand() % indexRange, rand() % indexRange);
		}

}

void Board::swap(int indexOne, int indexTwo)
{
	Block tmpBlock = blocks[indexOne];
	blocks[indexOne] = blocks[indexTwo];
	blocks[indexTwo] = tmpBlock;

}

void Board::makeMove(char moveDirection)
{
	switch (moveDirection)
	{
	case 'w':
	case 'W':
		moveUp();
		break;
	case 's':
	case 'S':
		moveDown();
		break;
	case 'a':
	case 'A':
		moveLeft();
		break;
	case 'd':
	case 'D':
		moveRight();
		break;
	default:
		break;
	}
}

void Board::moveUp()
{
	int emptyBlock = findEmptyBlock();

	if (emptyBlock - size >= 0)
		swap(emptyBlock, emptyBlock - size);

}

void Board::moveDown()
{
}

void Board::moveLeft()
{
}

void Board::moveRight()
{
}

int Board::findEmptyBlock()
{
	for (int i = 0; i < (size*size); i++)
	{
		if (blocks[i].value == 0)
			return i;
	}
}