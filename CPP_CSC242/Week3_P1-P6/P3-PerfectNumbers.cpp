#include <iostream>
using namespace std;

//function determining perfect numbers
bool isPerfect (int perfect)
{
	int i = 0;
	int factor = 0;
	int sum = 0;
	for (i = 1; i < perfect; i++)
		if(perfect % i == 0) //gives the factors of number perfect
			sum += i;
	if (sum == perfect) //determine if perfect is perfect number
	{
		cout << perfect << "---> ";
		cout << "Factors are: ";
		for (i = 1; i < perfect; i++)
			if(perfect % i == 0)
				cout << " " << i;
		cout << endl << endl;
		
		return true;
	}
	else
		return false;
}

int main ()
{
	// Display perfect numbers
	cout << "Perfect numbers from 1 --> 1000 are:  " << endl << endl << endl;

	for (int i = 1; i <= 1000; i++)
		isPerfect(i);

	return 0;
}