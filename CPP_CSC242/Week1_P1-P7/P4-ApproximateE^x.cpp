#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;

	// Get x
	cout << "Enter an x value to calculate e^x: " <<endl;
	cin >> x;

	// Calculate results
	double _ex = 1 + pow(x, 1) + (pow(x, 2) / 2.0) + (pow(x, 3) / 6.0) + (pow(x, 4) / 24.0) + (pow(x, 5) / 120.0);

	
	// Display result
	cout << "Result: " << _ex;

	return 0;
}