#include <iostream>
#include "P3_RectangularCube.h"
#include <ctime>
using namespace std;

int main()
{
	//new object and use print function
	RectangularCube p3_a(2, 1, 1);
	cout << "Object rc:\nLength: ";
	p3_a.printCube(p3_a);


	cout << "----------------------------------------------" << endl;
	cout << "----------------------------------------------" << endl; //space for cmd output

	//declare object array
	const int SIZE = 5;
	RectangularCube p3_b[SIZE];

	//initialize object array
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		p3_b[i].setLength(rand() % 10 + 1);
		p3_b[i].setWidth(rand() % 10 + 1);
		p3_b[i].setHeight(rand() % 10 + 1);
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Object p3_b[" << i << "]: "<< endl;
		p3_b[i].printCube(p3_b[i]);
		cout << endl;
	}

	return 0;
}