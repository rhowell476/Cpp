#include <iostream>
using namespace std;

int main ()
{
	/*elementType arrayName[SIZE] */
	int myIntArray[4];
	// myIntArray[0] = 1;
	// myIntArray[1] = 2;
	// myIntArray[2] = 3;
	// myIntArray[3] = 4;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter element " << i << ": ";
		cin >> myIntArray[i];
	}

	// cout << myIntArray[0] << " | " << myIntArray[1] <<  " | " << myIntArray[2] << " | " << myIntArray[3] << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "myIntArray[" << myIntArray[i] << "] | ";
	}

	cout << "\n-----------------------------------------\n";
	int maxVal = myIntArray[0];
	int maxValIndex = 0;

	for (int i = 1; i < 4; i++) {
		if (myIntArray[i] > maxVal)
			maxVal = myIntArray[i];
	}

	cout << "maxVal = " << maxVal << endl;
	cout << "maxValIndex = " << maxValIndex << endl;

	cout << "\n-----------------------------------------\n";
	int minVal = myIntArray[0];
	int minValIndex = 0;

	for (int i = 1; i < 4; i++) {
		if (myIntArray[i] < minVal)
			minVal = myIntArray[i];
			minValIndex = i;
	}

	cout << "minVal = " << minVal << endl;
	cout << "minValIndex = " << minValIndex << endl;

	return 0;
}