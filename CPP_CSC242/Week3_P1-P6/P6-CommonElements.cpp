#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10; /*each array size 10*/
	int firstArray[SIZE];
	int secondArray[SIZE];

	// call user to enter arrays 1 and 2
	cout << "Enter list1 (10 integers): ";

	for (int i = 0; i < SIZE; i++)
		cin >> firstArray[i];

	cout << "Enter list2 (10 integers): ";

	for (int i = 0; i < SIZE; i++)
		cin >> secondArray[i];

	// cout the common elements between the arrays
	cout << "The common elements are ";

	// compare lists for similar integers
	int commonNum = 0;
	for (int i = 0; i < SIZE; i++ ) /*outer for loop assigning commonNum for comparison*/
	{
		commonNum = firstArray[i];
		for (int i = 0; i < SIZE; i++ ) /* inner for loop checking commonNum against secondArray[] */
			if (commonNum == secondArray[i])
				cout << commonNum << " "; /*cout common numbers*/
	}
	return 0;
}