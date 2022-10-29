#include <iostream>
using namespace std;

int main()
{
	double purchaseAmount;
	cout << "Enter purchase amount: ";
	cin >> purchaseAmount;

	double tax = purchaseAmount * 0.07;
	cout << "Sales tax is " << static_cast<int>(tax * 100) / 100.0;

	return 0;
}