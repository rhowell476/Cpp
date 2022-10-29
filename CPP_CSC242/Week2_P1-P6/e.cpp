#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double ratio = 1.0;
	double e;

	// get user input
	cout << "Enter a positive number, n, to calculate e approximation: " << endl;
	cin >> n;

	// factorial cannot be < 0
	if (n > 0)
	{
		// calculate e
		for (int counter = 1.0; counter <= n; counter++)
		{
			double adding;
			ratio *= 1.0 / counter;
			adding += ratio;
			e = 1.0 + adding;
		}
		cout << "e to the nth constant: " << fixed << e;
	}
	else
		cout << "\n" << "Enter positive numbers only.";
	return 0;
}