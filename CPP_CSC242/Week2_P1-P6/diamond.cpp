#include <iostream>
using namespace std;

int main()
{
	string ch = " *";
	string space = " ";

// top outer loop
for (int row = 1; row <= 10; row++)
{
	// inner loop -- two needed. one for space, one for char
	for (int col = 10; col >= row; col--)
		cout << space;
	for (int col = 1; col <= row; col++)
		cout << ch;
	row++;
	cout << endl;
}

// lower outer loop
for (int row = 8; row >= 1; row--)
{
	//inner loop -- on creates space, one adds correct characters
	for (int col = 11; col >= row; col--)
		cout << space;
	for (int col = row; col <= row; col++)
		cout << ch;
	for (int col = 3; col <= row; col++)
	cout << ch;
	row--;
	cout << endl;
}

	return 0;
}


