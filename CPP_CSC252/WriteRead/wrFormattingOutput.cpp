#include <iostream>
#include <fstream> //ofstream class used to write primitive data type values, arrays, strings, obj to file
#include <iomanip>
using namespace std;

int main()
{
	ofstream output;

	// Create a file
	output.open("wrFormattingOutput.txt");

	// Write two lines
	output << setw(2) << "John" << setw(4)
		<< "T" << setw(10) << "Smith"
		<< " " << setw(4) << 90 << endl;
	output << setw(2) << "Eric" << setw(4)
		<< "K" << setw(10) << "Johnston"
		<< " " << setw(4) << 85;
	output.close();
	cout << "Done" << endl;
	return 0;
}