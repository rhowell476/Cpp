#include <iostream>
using namespace std;

int main()
{
	int fourByFour[4][4];
	int row = 0;
	int col = 0;
	for (row = 0; row < 4; row++)
	{
		for (col = 0; col < 4; col++)
		{
			cin >> fourByFour[row][col];
		}
		cout << endl;
	}

	for (row = 0; row <= 4; row++)
	{
  		if (fourByFour[row][0] == 0 && fourByFour[row][1] == 0 && fourByFour[row][2] == 0 && fourByFour[row][3] == 0)
  			cout << "All 0's on row " << row << endl;
  		if (fourByFour[row][0] == 1 && fourByFour[row][1] == 1 && fourByFour[row][2] == 1 && fourByFour[row][3] == 1)
  			cout << "All 1's on row " << row << endl;
	}

	for (col = 0; col <= 4; col++)
	{
		if ((fourByFour[0][col] != fourByFour[1][col]) && (fourByFour[0][col] != fourByFour[2][col]) &&
		 (fourByFour[0][col] != fourByFour[3][col]) && (fourByFour[1][col] != fourByFour[2][col]) &&
		 (fourByFour[1][col] != fourByFour[3][col]) && (fourByFour[2][col] != fourByFour[3][col]))
  			cout << "No same numbers on a column";
	}

	return 0;
}