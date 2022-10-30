//A functino is an independent, reusable module that performs a well defined task.
//<return type> <name of the function> (list of parameters)
// {
	//CODE
// }
#include <iostream>
using namespace std;

//Write a function called sumTwo that receives two integer parameters and returns their sum
int sumTwo(int x, int y) {
	int total = x + y;
	return total;
}

int main()
{
	cout << "2^3 = " << pow(2, 3) << endl;
	cout << "The sum of 5 and 7 = " << sumTwo(5, 7) << endl;
	system("pause");
	return 0;
}