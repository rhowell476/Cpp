#include <iostream>
using namespace std;

const int SIZE = 4;
double threeByFour[3][SIZE];
double sumColumn(const double threeByFour[][SIZE], int rowSize, int columnIndex)
{
	double total;
	for (int col = 0; col <= 3; col++)
	{
		total = 0;
  		int row;
  		for (row = 0; row < 3; row++)
  		{
    		total += threeByFour[row][col];
  		}
  		cout << "Sum for column " << col << " is " << total << endl;
	}
	return total;
}

int main()
{
	cout << "Enter a 3-by-4 matrix row by row: " << endl; /* enter array values*/
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cin >> threeByFour[row][col];
		}
		cout << endl;
	}

	sumColumn(threeByFour, 3, SIZE);

	return 0;
}