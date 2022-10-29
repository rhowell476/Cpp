#include <iostream>
#include <cmath>
using namespace std;

int main (){

	double x1, y1, x2, y2, x3, y3;

	// get the points
	cout << "Enter value x1, y1, x2, y2, x3, y3: " << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// calculate the distance
	double a;
	double b;
	double c;

	a = sqrt(pow((x2-x3), 2) + pow((y2-y3),2));
	b = sqrt(pow((x1-x3), 2) + pow((y1-y3),2));
	c = sqrt(pow((x1-x2), 2) + pow((y1-y2),2));

	// inverse cosing function
	double A;
	double B;
	double C;

	A = acos((a * a - b * b - c * c) / (-2 * b * c));
	B = acos((b * b - a * a - c * c) / (-2 * a * c));
	C = acos((c * c - b * b - a * a) / (-2 * a * c));

	//convert radians to degrees
	const double PI = 3.14159;
	A = A * 180 / PI;
	B = B * 180 / PI;
	C = C * 180 / PI;

	// display results
	cout << "Angle A= " << A << endl;
	cout << "Angle B= " << B << endl;
	cout << "Angle C= " << C << endl;

	//TODO 10-29: Angle does not work if point is at (0,0)

}