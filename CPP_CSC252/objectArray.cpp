#include <iostream>
#include <ctime> //<--- used below for random circle radius
#include "OA_CircleWithPrivateDataFields.h"

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

// Circle array and printing areas
int main()
{
	srand(time(0));
	Circle c[4] = { Circle(3), Circle(5), Circle(), Circle(8) };
	std::cout << c[0].getRadius() << "\n\n";

	for (int i = 0; i < 4; i++)
		std::cout << c[i].getRadius() << " ";
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		c[i].setRadius(rand() % 10);
	for (int i = 0; i < 4; i++)
		std::cout << c[i].getArea() << " ";
	std::cout << std::endl;

	return 0;
}