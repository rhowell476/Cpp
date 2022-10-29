#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double n; // n = number of sides
	double s; // s = length of side

	// Get input for n and s
	cout << "Enter the number of sides: " << endl;
	cin >> n; 
	cout << "Enter the side: " << endl;
	cin >> s;

	// Calculate the area
	double area = (n * pow(s, 2.0)) / (4.0 * tan(PI / n));

	// Output result
	cout << "The area of the polygon is " << fixed << setprecision(2) << area;

	return 0;
}