#include "Block.h"

#include <iostream>
#include <string>

void Block::print()
{
	string spacer;

	if (value / 10 <= 0)
		spacer = " ";
	else
		spacer = "";

	if (value == 0)
		cout << "[" << spacer << spacer << "]";
	else
		cout << "[" << spacer << blocks[i].value << "]";
}

void Block::setValue()
{
}
