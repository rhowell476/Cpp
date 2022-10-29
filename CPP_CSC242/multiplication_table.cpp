#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// set first row of multiplication table
	cout << setw(6) << 0 << setw(6) << 1 << setw(6) << 2 <<
		setw(6) << 3 << setw(6) << 4 << setw(6) << 5 << setw(6) <<
		6 << setw(6) << 7 << setw(6) << 8 << setw(6) << 9 << setw(6) <<
		10 << endl;

	// column numbers 1 - 10
	for (int i = 1; i <= 10; i++)
	{
		cout << setw(6) << i;

		// inner loop multiply i * j QUESTION:: is it possible to run the first iteration twice??
		for (int j = 1; j <=10; j++)
		{
			cout << setw(6) << j * i;
		}
		cout << endl;
	}

	return 0;
}