#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	// Declare variables
	string firstName;
	string lastName;
	double grade1;
	double grade2;
	double grade3;
	double grade4;

	// Open read and write streams
	ifstream input("C:\\Users\\Reddogg-PC\\Documents\\Documents\\Important\\School\\National University\\CSC-252-07-2021\\.assignment3\\p2_fourGrades.txt");
	ofstream output("C:\\Users\\Reddogg-PC\\Documents\\Documents\\Important\\School\\National University\\CSC-252-07-2021\\.assignment3\\p2_fourGrades2.txt");

	// Read data file, output to file, calculate average, display result
	input >> firstName >> lastName >> grade1 >> grade2 >> grade3 >> grade4;
	output << firstName << " " << lastName << "    " << grade1 << " " << grade2 <<
		" " << grade3 << " " << grade4 << endl;
	double average = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << firstName << " " << lastName << " " << average << endl;

	// Read data file, output to file, calculate average, display result
	input >> firstName >> lastName >> grade1 >> grade2 >> grade3 >> grade4;
	output << firstName << " " << lastName << "    " << grade1 << " " << grade2 <<
		" " << grade3 << " " << grade4 << endl;
	average = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << firstName << " " << lastName << " " << average << endl;

	// Read data file, output to file, calculate average, display result
	input >> firstName >> lastName >> grade1 >> grade2 >> grade3 >> grade4;
	output << firstName << " " << lastName << "    " << grade1 << " " << grade2 <<
		" " << grade3 << " " << grade4 << endl;
	average = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << firstName << " " << lastName << " " << average << endl;

	// Read data file, output to file, calculate average, display result
	input >> firstName >> lastName >> grade1 >> grade2 >> grade3 >> grade4;
	output << firstName << " " << lastName << "    " << grade1 << " " << grade2 <<
		" " << grade3 << " " << grade4 << endl;
	average = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << firstName << " " << lastName << " " << average << endl;

	// Read data file, output to file, calculate average, display result
	input >> firstName >> lastName >> grade1 >> grade2 >> grade3 >> grade4;
	output << firstName << " " << lastName << "    " << grade1 << " " << grade2 <<
		" " << grade3 << " " << grade4 << endl;
	average = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << firstName << " " << lastName << " " << average << endl;


	// Close data streams
	input.close();
	output.close();

	return 0;
}