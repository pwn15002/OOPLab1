#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "Block.h"

class Board
{
private:
	int size;
	Block *blocks;
	//vector<Block> blocks;
	void randomizeBoard();
public:
	Board();
	void printBoard();
	bool isSorted();
	void makeMove(char);
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void swap(int, int);
	int findEmptyBlock();

};

#endif