#include <iostream>
using namespace std;

int main()
{
	// Prompt the user to enter two integers
	cout << "Enter first integer: ";
	int n1;
	cin >> n1;

	cout << "Enter second integer: ";
	int n2;
	cin >> n2;

	int gdc = 1;
	int k = 2;

	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0 && n2 % k == 0) // n1/n2 remainder k is GDC calc
			gdc = k; //update gdc
		k++; //next possible gcd
	}

	cout << "The greatest common divisor for " << n1 << " and "
		<< n2 << " is " << gdc << endl;

	// can use for loop:
	/* 
		for (int k = 2; k <= n1 && l <= n2; k++)
		{
			if (n1 % k == 0 && n2 % k ==0)
				gcd = k;
		}
	*/
}