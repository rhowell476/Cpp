#include "circle.h"
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	
	//Circle c1;
	//Circle c2(5.5);
	//cout << c1.getRadius() << "\n";
	//cout << c2.getRadius() << "\n";
	//cout << c2.getArea() << "\n";
	//c1.setRadius(100);
	//cout << c1.getRadius() << "\n";
	//system("pause");

	srand(time(0));
	Circle c[4] = { Circle(3), Circle(5), Circle(), Circle(8) };
	cout << c[0].getRadius() << endl;
	for (int i = 0; i < 4; i++)
		cout << "Area of circle with radius " << c[i].getRadius() << " is " << c[i].getArea() << endl;
	for (int i = 0; i < 4; i++)
		c[i].setRadius(rand() % 10);
	for (int i = 0; i < 4; i++)
		cout << "Area of circle with radius " << c[i].getRadius() << " is " << c[i].getArea() << endl;

	system("pause");
	return 0;
}