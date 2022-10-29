#include <iostream>
using namespace std;

//Function prototype
int max(int num1, int num2); //each 5-6 can be written without parameter names
double max(double num1, double num2);
double max(double num1, double num2, double num3);

int main()
{
	cout << "The max of 3 and 4 is " << max(3, 4) << endl;

	cout << "The max between 3.0 and 5.4 is " << max(3.0, 5.4) << endl;

	cout << "The max between 3.0, 5.4, and 10.14 is "
		<< max (3.0, 5.4, 10.14) << endl;

	return 0;
}


// return max value
int max(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

//find max between two doubles
double max(double num1, double num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// return the max among three doubles
double max (double num1, double num2, double num3)
{
	return max(max(num1, num2), num3);
}