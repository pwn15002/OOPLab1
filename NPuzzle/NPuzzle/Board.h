
class Board
{
private:
	int size;
	Block *blocks;
	void randsomizeBoard();
public:
	Board();
	~Board();
	void printBoard();
	void moveBlock();
	bool isSorted();
	void MakeMove();

};

