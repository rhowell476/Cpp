#include <iostream>
using namespace std;

class Grid
{
public:
	Grid() { /*Grid class member no-arg constructor*/
		for (int row = 0; row < 10; row++)
			for(int col = 0; col < 10; col++)
				board[row][col] = 0;
	}

	// set the given value at the given array index
	void setTile(int row, int col, int newValue) {
		board[row][col] = newValue;
	}

	// return value of the given array index
	int getTile(int row, int col) const {
		return board[row][col];
	}

private: /*one private data field*/
	int board[10][10];
};

int main()
{
	Grid game1; /*create game object*/

	// display element (3,5) is 0
	cout << "Grid(3,5) is: " << game1.getTile(3,5) << endl;

	// set element (3,5) to value 100 and print
	game1.setTile(3, 5, 100);
	cout << "Grid(3,5) is: " << game1.getTile(3,5);

	return 0;
}