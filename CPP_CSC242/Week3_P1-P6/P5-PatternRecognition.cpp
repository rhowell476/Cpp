#include <iostream>
using namespace std;

// function checking consecutive fours in array
bool isConsecutiveFour(const int values[], int size)
{
	int number = 0;
	int placeholder = 0;
	for (int i = 0; i < size; i++)
	{	
		placeholder = values[i];
		// if statement for consecutive 4s within array
		if (values[i + 3] == placeholder && (values[i + 1] == values[i + 2])
			&& (values[i + 2] == values[i + 3]))
			return true;
	}
	return false; /*always return false unless consecutives are found */
}

int main()
{
	const int SIZE = 80;
	int values[SIZE] = {};
	int number = 0;

	cout << "Enter the number of values: ";
	cin >> number;

	cout << "Enter the values: ";
	for (int i = 0; i < number; i++)
		cin >> values[i];

	//call isConsecutiveFour function and cout results
	if(isConsecutiveFour(values, number))
	{
		cout << "The list has consecutive fours";
		return 0;
	} 
	else 
		cout << "The list has no consecutive fours";

	return 0;
}