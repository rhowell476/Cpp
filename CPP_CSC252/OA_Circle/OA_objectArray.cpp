#include <iostream>
#include <ctime> //<--- used below for random circle radius
#include <iomanip>
#include "OA_CircleWithPrivateDataFields.h"


/*BELOW FUNCTION USED WITH THE ABOVE CLASS. IT IS SHOWING HOW TO PASS OBJECTS
INTO FUNCTIONS BY REFERENCE OR BY VALUE. UNCOMMENT TO USE*/
// void f1(Circle& pc) // call by reference
// {
// 	pc.setRadius(44);
// }

// void f2(Circle pc) // call by value
// {
// 	pc.setRadius(44);
// }

// void f3(const Circle& pc) // call by value
// {
// 	pc.setRadius(44);
// }

// Circle objects using call by value and call by parameter functions (above)
// int main()
// {
// 	Circle c2(5.5);
// 	std::cout << c2.getRadius() << "\n";
// 	f2(c2);
// 	std::cout << c2.getRadius() << "\n";
// 	system("pause");
// 	return 0;
// }
/*---------------------------END OF PASS OBJECTS TO FUNCTIONS ---------------------------*/

/*----------------------Circle objects array and printing areas----------------------*/
// int main()
// {
// 	srand(time(0));
// 	Circle c[4] = { Circle(3), Circle(5), Circle(), Circle(8) };
// 	std::cout << c[0].getRadius() << "\n\n";

// 	for (int i = 0; i < 4; i++)
// 		std::cout << c[i].getRadius() << " ";
// 	std::cout << std::endl;
// 	for (int i = 0; i < 4; i++)
// 		c[i].setRadius(rand() % 10);
// 	for (int i = 0; i < 4; i++)
// 		std::cout << c[i].getArea() << " ";
// 	std::cout << std::endl;

// 	return 0;
// }

/*---------------------------END OF CIRCLE OBJECT ARRAYS ---------------------------*/


/*----------------------Circle objects array and printing areas----------------------*/
// using namespace std;

// void printCircle(Circle& c)
// {
// 	cout << "The area of the circle of "
// 	  << c.getRadius() << " is " << c.getArea() << endl;
	  
// }
// int main()
// {
// 	Circle myCircle(5.0);
// 	printCircle(myCircle);

// 	return 0;
// }
/*---------------------------END OF CIRCLE OBJECT ARRAYS ---------------------------*/


/*--------------------------------------TotalArea------------------------------*/
using namespace std;
// Add circle areas
double sum(Circle circleArray[], int size)
{
	// Initialize sum
	double sum = 0;

	// Add areas to sum
	for (int i = 0; i < size; i++)
		sum += circleArray[i].getArea();

	return sum;
}

// Print an array of circles and their total area
void printCircleArray(Circle circleArray[], int size)
{
	cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(35) << left << circleArray[i].getRadius()
		  << setw(8) << circleArray[i].getArea() << endl;
	}

	cout << "-----------------------------------------------" << endl;

	// Computer and display the result
	cout << setw(35) << left << "The total area of circles is"
	  << setw(8) << sum(circleArray, size) << endl;
}

int main()
{
	const int SIZE = 10;

	// Creat a circle object with radius 1
	Circle circleArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		circleArray[i].setRadius(i + 1);
	}

	printCircleArray(circleArray, SIZE);

	return 0;
}