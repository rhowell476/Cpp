#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double a, b;

	// Prompt the user to enter two numbers
	cout <<
	"Calculate an ellipse. Enter major and minor axis length, respectively ex: 2.0 1.0:" << endl;
	cin >> a >> b;

	if (a >= b) {
		double area = PI * a * b;
		cout << "Area of the ellipse is: " << static_cast<double>(area) << endl;
	}
	else
		cout << "Major axis must be greater than minor axis.";
	
	return 0;
}