#include "p3.h"
#include <iostream>
using namespace std;


int main() {

	RectangularCube r1(2, 2, 2);
	RectangularCube r2(3, 3, 3);
	RectangularCube r3 = r1 + r2;

	cout << "r3.getLength() is: " << r3.getLength() << endl;
	cout << "r3.getWidth() is: " << r3.getWidth() << endl;
	cout << "r3.getHeight() is: " << r3.getHeight() << endl;

	cout << "r3.Volume() is: " << r3.Volume() << endl;
	cout << "r3[2] is: " << r3[2] << endl;
	if (r3 < r2)
		cout << "r3 < r2 is true";
	else
		cout << "r3 < r2 is false";

	cout << endl << "\nObject r3: " << endl << r3;

	return 0;
}