#include <iostream>
#include <algorithm> //use sort function to sort an array
#include <ctime>
using namespace std;

//merge arrays function
int * mergeArrays(int * array1, int size1, int* array2, int size2) {
	int* mergeArray = new int[size1 + size2];

	for (int i = 0; i < size1; i++)
		mergeArray[i] = array1[i];
	for (int i = 0; i < size2; i++)
		mergeArray[size1 + i] = array2[i];

	return mergeArray;
}

//print array function
void printArray(int * array, int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main() {
	srand(time(0));

	//declare and initialize arrays with random integers
	int firstArray[15];
	int secondArray[25];

	for (int i = 0; i < 15; i++)
		firstArray[i] = rand() % 100;

	for (int i = 0; i < 25; i++)
		secondArray[i] = rand() % 50 + 1;

	//sort and print first and second arrays
	sort(firstArray, firstArray + 15);
	sort(secondArray, secondArray + 25);
	printArray(firstArray, 15);
	printArray(secondArray, 25);

	//merge first and second arrays and print
	int* thirdArray = mergeArrays(firstArray, 15, secondArray, 25);
	printArray(thirdArray, 40);

	return 0;
}