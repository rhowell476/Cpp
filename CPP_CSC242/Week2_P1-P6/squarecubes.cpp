#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	for (int num = 0; num <= 10; num++)
	{
		cout << setw(6) << num;

		for (int i = 1 ; i < 2; i++)
		{
			cout << setw(8) << pow(num, 2);

			cout << setw(8) << pow(num, 3) << endl;
		}
	}
}