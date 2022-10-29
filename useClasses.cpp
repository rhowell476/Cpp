#include <iostream>
using namespace std;

class Circle
{
public: /*all data fields, constructors, functions can be accessed from the objects*/
	// The radius of this circle
	double radius;

	// Construct a default circle object
	Circle()
	{
		radius = 1;
	}

	// Construct a circle object
	Circle(double newRadius)
	{
		radius = newRadius;
	}

	// Return the area of this circle
	double getArea()
	{
		return radius * radius * 3.14159;
	}
}; /* Must place a semicolon here */

int main()
{
	Circle circle1(1.0);
	Circle circle2(25);
	Circle circle3(125);

	cout << "The are of the circle of radius "
	  << circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The are of the circle of radius "
	  << circle2.radius << " is " << circle2.getArea() << endl;
	cout << "The are of the circle of radius "
	  << circle3.radius << " is " << circle3.getArea() << endl;

	// ALSO-----------------------------
	cout << "Area is " << Circle().getArea() << endl;
	cout << "Radius is " << Circle().radius << endl;
	cout << "Area(5) is " << Circle(5).getArea() << endl;
	//int circle4;
	//int circle4;  /*cannot get these to work??*/
	Circle circle4;
	//circle4 = Circle(5);
	
	// Modify circle radius
	circle2.radius = 100;
	cout << "The area of the circle of radius "
	  << circle2.radius << " is " << circle2.getArea() << endl;


	//Sizeof function -------------------------------
	cout << "Sizeof(circle1) is: " << sizeof(circle1) << endl;
	cout << "Sizeof(circle1) is: " << sizeof(circle1) << endl;

	return 0;
}