#include <iostream>
using namespace std;

// create square shape function
void squareOfAsterisks (int side)
{
	for (int col = 0; col < side; col++)
	{
		for(int row = 0; row < side; row++)
			cout << "*";
		cout << endl;
	}
}


int main ()
{
	int input = 0;

	cout << "Enter an integer for side length: " << endl;
	cin >> input;

	squareOfAsterisks(input);
	
	return 0;
}