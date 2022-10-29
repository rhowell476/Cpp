#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double d;
	double r;

	// Get the numbers a, b, c, d

	cout << "Give a value for a, b, c, d, r (ex: 1 2 3 4 5): " << endl;
	cin >> a >> b >> c >> d >> r;

	// Calculate results
	double function = (4.0 / (3.0 * (r + 34.0))) - (9.0 * (a + b * c)) + (3.0 + d * (2.0 + a))/(a + (b * d));

	// Display result
	cout << "Result: " << function;

	return 0;
}