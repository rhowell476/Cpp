#include <iostream>
#include <fstream> //ofstream class used to write primitive data type values, arrays, strings, obj to file
using namespace std;

int main()
{
	ofstream output;
	// Create a file
	output.open("writeDataScores.txt");
	// Write two lines
	output << "John" << " " << "T" << " " << "Smith"
		<< " " << 90 << endl;
	output << "Eric" << " " << "K" << " " << "Jones"
		<< " " << 85 << endl;
	output.close();
	cout << "Done" << endl;
	return 0;
}