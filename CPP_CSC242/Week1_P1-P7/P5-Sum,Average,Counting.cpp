#include <iostream>
using namespace std;

int main()
{
	double number1;
	double number2;
	double number3;
	double number4;
	double sum;
	double average;
	int amount = 0;

	// Get double numbers 1, 2, 3, 4
	cout << "Enter 4 double numbers: " << endl;
	cin >> number1 >> number2 >> number3 >> number4;

	// Calculate sum
	sum = number1 + number2 + number3 + number4;

	// Calculate average
	average = sum / 4.0;

	// Calculate number of numbers above average
	if (number1 > average)
		amount++;
	if (number2 > average)
		amount++;
	if (number3 > average)
		amount++;
	if (number4 > average)
		amount++;

	// Output results
	cout << "The sum is: " << sum << endl;
	cout << "The average is: " << average << endl;
	cout << "There are " << amount << " numbers greater than the average.";

	return 0;
}