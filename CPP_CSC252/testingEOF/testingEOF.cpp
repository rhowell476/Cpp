#include <iostream>
#include <fstream> //ofstream class used to write primitive data type values, arrays, strings, obj to file
using namespace std;

int main()
{
	// Open a file
	ifstream input("testingEOF.txt");

	if (input.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	double sum = 0;
	double number;
	while (input >> number) // Read data to the end of file
	{
		cout << number << " "; // Display data
		sum += number;
	}

	input.close();

	cout << "\nTotal is " << sum << endl;

	return 0;
}