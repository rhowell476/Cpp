#include <iostream>
using namespace std;

void printArray(const int arrayIn[], int size) {
	for (int i = 0; i < 10; i++)
		cout << "array[" << i << "] = " << arrayIn[i] << endl;
	//arrayIn[0]++;
}

int main()
{
	int myArray1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int myArray2[10] = { 2,3,4,5,6,7,8,9,10,11 };
	int myArray3[10] = { 3,4,5,6,7,8,9,10,11,12 };

	printArray(myArray1, 10);
	cout << "\n-------------------------------\n";
	printArray(myArray1, 10);

	cout << "\n============================\n";

	printArray(myArray2, 10);
	cout << "\n-------------------------------\n";
	printArray(myArray3, 10);

	return 0;
}