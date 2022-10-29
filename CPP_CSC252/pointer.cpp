#include <iostream>
using namespace std;
typedef int* intPointer;
typedef double* doublePointer;

// int main()
// {
// 	//typedef keyword
// 	double rad = 25.2;
// 	doublePointer pRad = &rad;


// 	int num = 10;
// 	int* pNum = &num;

// 	cout << "num = " << num << endl;
// 	cout << "pNum = " << pNum << endl;
// 	cout << "&num = " << &num << endl;

// 	//dereferencing:
// 	cout << "*pNum (show the value that this pointer is referencing) " << *pNum << endl;

// 	//modified pointer now set to 20 through dereferencing operator "*"
// 	*pNum = 20;
// 	cout << "num = " << num << endl;

// 	cout << "Hello World!\n";

// 	int number = 1001;
// 	//int *pI, *pJ;
// 	int* pI;
// 	int* pJ;
// 	pI = &number;
// 	pJ = &number;
// 	cout << "\n" << pI << " " << pJ;

// 	cout << "\n----------------------------------------------------\n";
// 	int x = 10;
// 	int y = 20;

// 	int* pX = &x;
// 	int* pY = &y;

// 	cout << "x = " << x << endl;
// 	cout << "y = " << y << endl;
// 	cout << "pX = " << pX << endl;
// 	cout << "pY = " << pY << endl;

// 	*pX = *pY;
// 	cout << "\nAfter:\n";
// 	cout << "x = " << x << endl;
// 	cout << "y = " << y << endl;
// 	cout << "pX = " << pX << endl;
// 	cout << "pY = " << pY << endl;


// 	cout << "\n------------------------CONST----------------------------";
// 	double radius = 5;
// 	double* const p = &radius;
// 	double length = 8;
// 	*p = 6;

// 	const double* p1 = &radius;
// 	p1 = &length;

// 	const double* const p2 = &radius;

// 	cout << "\n*p is: " << *p << " and pointer p is: " << p;
// 	cout << "\n*p1 is: " << *p1 << " and pointer p1 is: " << p1;
// 	cout << "\n*p2 is: " << *p2 << " and pointer p2 is: " << p2;

// 	return 0;
// }

int main()
{
	int count = 5;
	short status = 2;
	char letter = 'A';

	int* pCount = &count;
	short* pStatus = &status;
	char* pLetter = &letter;

	pCount = &count;

	cout << "pCount is: " << pCount << endl;
	cout << "pStatus is: " << pStatus << endl;
	cout << "pLetter is : " << *pLetter << endl;

	/*

	OUT:
	--------
	C:\...\week1\>pointer.exe
	pCount is: 008FF740
	pStatus is: 008FF744
	pLetter is : A
	--------
	&: address operator
	&count means the address of count

	*: dereference operator
	*pCount means the value pointed by pCount
	*/
	return 0;
}