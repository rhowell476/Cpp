#include <iostream>
using namespace std;

int main()
{
	float bill;
	float tip;

	// Prompt the user to enter bill amount
	cout << "Enter the bill amount (in dollars): " << endl;
	cin >> bill;

	// Prompt to enter tip %
	cout << "Enter the tip percentage: (%): " << endl;
	cin >> tip;

	// Calculate the amount
	int billint = static_cast<int>(bill * 100);
	int tip_amount = billint * (tip / 100);
	double total = (tip_amount + billint) / 100.0;

	// Display the bill total (bill + tip)
	cout << "The bill total is $" << bill << " + a tip of $" << tip_amount / 100.0;
	cout << " for a total of $" << total;

	return 0;
}