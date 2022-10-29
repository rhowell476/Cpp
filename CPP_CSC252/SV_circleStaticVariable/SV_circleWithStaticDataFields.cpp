#include <iostream>
#include "SV_circleStaticVariable.h"
using namespace std;

void foo (Circle  c)
{
    c. setRadius(4);
    return;
}

int main()
{
	cout << "Number of circle objects created: "
	  << Circle::getNumberOfObjects() << endl;

	Circle circle1;
	cout << "The area of the circle of radius "
	  << circle1.getRadius() << " is " << circle1.getArea() << endl;
	cout << "Number of circle objects created: "
	  << Circle::getNumberOfObjects() << endl;

	Circle circle2(5.0);
	 cout << "The area of the circle of radius "
	  << circle2.getRadius() << " is " << circle2.getArea() << endl;
	cout << "Number of circle objects created: "
	  << Circle::getNumberOfObjects() << endl;

	// Modify circle radius
	circle1.setRadius(3.3);
	 cout << "The area of the circle of radius "
	  << circle1.getRadius() << " is " << circle1.getArea() << endl;

	cout << "circle1.getNumberOfObjects() returns "
	  << circle1.getNumberOfObjects() << endl;
	//object.numberOfObjects not accessed when numberOfObjects is private
	  // cout << "circle1.numberOfObjects returns "
	  // << circle1.numberOfObjects << endl;
	cout << "circle2.getNumberOfObjects() returns "
	  << circle2.getNumberOfObjects() << endl;

	cout << Circle().getRadius();

	cout << "---------------------------------------" << endl;

	Circle mc(2);
	cout << mc.getRadius() << " ";
	foo(mc);
	cout<<mc.getRadius()<< "\n";

	return 0;
}