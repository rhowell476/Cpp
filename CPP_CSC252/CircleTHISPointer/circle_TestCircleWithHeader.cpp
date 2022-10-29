#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle circle1;

	cout << "The area of the circle of radius "
	  << circle1.getRadius() << " is " << circle1.getArea() << endl;
	cout << "numberOfObjects: " << Circle::getNumberOfObjects() << endl;

	Circle circle2(4);
	cout << "The area of the circle of radius "
	  << circle2.getRadius() << " is " << circle2.getArea() << endl;
	cout << "numberOfObjects: " << Circle::getNumberOfObjects() << endl;

	// Modify circle radius
	circle2.setRadius(80);

	cout << "The area of the circle of radius "
	  << circle2.getRadius() << " is " << circle2.getArea() << endl;
	cout << "numberOfObjects: " << Circle::getNumberOfObjects() << endl;

	Circle* pCircle3 = new Circle();

	cout << "New numberOfObjects: " << Circle::getNumberOfObjects() << endl;

	delete pCircle3;

	cout << "numberOfObjects: " << Circle::getNumberOfObjects() << endl;

	circle1.setRadius(4);
	Circle circle3(circle1);
	cout << "Circle3.radius is " << circle3.getRadius();

	return 0;
}