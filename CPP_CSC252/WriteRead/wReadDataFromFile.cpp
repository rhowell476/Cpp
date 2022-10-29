#include <iostream>
#include <fstream> //ofstream class used to write primitive data type values, arrays, strings, obj to file
using namespace std;

int main()
{
	ifstream input("writeDataScores.txt");
	// Read data
	string firstName;
	char mi;
	string lastName;
	int score;
	input >> firstName >> mi >> lastName >> score;
	cout << firstName << " " << mi << " " << lastName << " "
		<< score << endl;
	input >> firstName >> mi >> lastName >> score;
	cout << firstName << " " << mi << " " << lastName << " "
		<< score << endl;
		input.close();
	cout << "Done" << endl;
	return 0;
}