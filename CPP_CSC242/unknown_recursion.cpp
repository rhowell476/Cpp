#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int sentinel;

	// add sums of numbers until sentinel value is given

	while (num1 != 0 && num2 != 0)
	{
		cout << "Enter two numbers to add EX: (12 18). (0) to exit: " << endl;
		cin >> num1 >> num2;

		int sum = num1 + num2;

		cout << "\n The sum is: " << sum << endl;
	}

	return 0;
}