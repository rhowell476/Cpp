#include <iostream>
using namespace std;

int main()
{
	// Enter palindrome number - 5 digits
	int number;

	cout << "Determine if number is a palindrome. Enter a 5 digit number ex: 23456: " << endl;
	cin >> number;

	// Get the number of the 1st, 2nd, 3rd, 4th, 5th digits
	int digit1 = number / 10000;
	int digit2 = (number / 1000);
	int digit3 = (number / 100);
	int digit4 = (number / 10);
	int digit5 = (number / 1);

	int place1 = digit1;
	int place2 = (number / 1000) - (digit1 * 10);
	int place3 = (number / 100) - (digit2 * 10);
	int place4 = (number / 10) - (digit3 * 10);
	int place5 = (number / 1) - (digit4 * 10);

	// Calculate palindrome comparisons and output result
	if (place1 == place5)
	{
		if (place2 = place4)
			cout << "This is a palindrome!";
	}
	else
		cout << "This is not a palindrome.";

	return 0;
}