#include <iostream>
using namespace std;

// Return the gcd of two integers
int gcd(int n1, int n2)
{
	int gcd = 1;
	int k = 2;

	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0 && n2 % k == 0) // n1/n2 remainder k is GDC calc
			gcd = k; //update gdc
		k++; //next possible gcd
	}

	return gcd;
}

int main()
{
	// Prompt the user to enter two integers
	cout << "Enter first integer: ";
	int n1;
	cin >> n1;

	cout << "Enter second integer: ";
	int n2;
	cin >> n2;

	cout << "The greatest common divisor for " << n1 << " and "
		<< n2 << " is " << gcd(n1, n2) << endl;

	// can use for loop:
	/* 
		for (int k = 2; k <= n1 && l <= n2; k++)
		{
			if (n1 % k == 0 && n2 % k ==0)
				gcd = k;
		} */
	return 0;
}