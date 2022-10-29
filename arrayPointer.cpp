#include <iostream>
using namespace std;


/* Main function creating array and pointers to show address and values*/
// int main()
// {
// 	int list[6] = {11, 12, 13, 14, 15, 16};

// 	for (int i = 0; i < 6; i++)
// 		cout << "\taddress: " << (list + i) << "\tvalue: \t" << *(list + i)
// 		  << "\tvalue: \t" << list[i] << endl;

// 	return 0;
// }

int main()
{
	int list[6] = {11, 12, 13, 14, 15, 16};
	int* p = list;
	*(p + 2) = NULL;

	for (int i = 0; i < 6; i++)
		cout << "address: " << (list + i) <<
		  "\tvalue: \t" << *(list + i) <<
		  "\tvalue: \t" << list[i] <<
		  "\naddress: " << p + i <<
		  "\tvalue: \t" << *(p + i) << " " <<
		  "\tvalue: \t" << p[i] << endl << endl;

	return 0;
}