#include <iostream>
#include <fstream> //used to read the file using ifstream
#include <iomanip> //used for setw() and fixed, setprecision() functions
using namespace std;

int main()
{
	// Open a file
	ifstream input("unknown_recursion_numbers.txt");

	double sum = 0;
	double number;
	while (!input.eof()) // Continue if not end of file
		{
			input >> number; // Read data
			cout << fixed << setprecision(0) << number << " "; // Display data
			sum += number;
		}

	input.close();

	cout << "\nSum is " << setprecision(12) << sum << endl;

	return 0;
}