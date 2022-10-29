#include <iostream>
using namespace std;

int* returnArray (int* list, int size);

int main()
{
	int shortArray[6] = {0, 1, 2, 34, 42, 5};

	for (int i = 0; i < 6; i++)
		cout << shortArray[i] << "\t";

	// int sameArray[6];
	// int* pPlaceholder = returnArray(shortArray, 6);
	
	// cout << "\n\n*pPlaceholder[3]: " << pPlaceholder[3];
	// for (int i = 0; i < 6; i++)
	// {
	// 	cout << "\npPlaceholder[" << i << "] is: " << pPlaceholder[i] << endl;
	// 	sameArray[i] = pPlaceholder[i];
	// 	cout << "sameArray[" << i << "] is: " << sameArray[i] << endl;
	// }

	int* sameArray = returnArray(shortArray, 6);

	for (int i = 0; i < 6; i++)
		cout << "sameArray[" << i << "] is: " << sameArray[i] << endl;



	return 0;
}

int* returnArray (int* list, int size)
{
	int* returnArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		returnArray[i] = list[i];
	}

	cout << "returnArray is: " << returnArray[3];

	return returnArray;
}