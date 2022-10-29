#include <iostream>
using namespace std;

int sum;

int main()
{
	int number;
	int studentScores[100];
	int max = 0;

	// get user input for number of students
	cout << "Enter the number of students: ";
	cin >> number;

	studentScores[number] = {};

	// set array of student scores
	cout << "Enter 4 scores: ";
	for (int i = 0; i < number; i++)
	{
		cin >> studentScores[i];
	}

	// find max value of array indexes
	for (int i = 0; i < number; i++)
	{
		if (studentScores[i] > max)
			max = studentScores[i];
	}

	// grade the scores from user input and cout results
	for (int i = 0; i < number; i++)
	{
		char grade;
		if (studentScores[i] >= max - 10)
			grade = 'A';
		else if (studentScores[i] >= max - 20)
			grade = 'B';
		else if (studentScores[i] >= max - 30)
			grade = 'C';
		else if (studentScores[i] >= max - 40)
			grade = 'D';
		cout << "Student " << i << " score is " << studentScores[i] << 
		" and grade is " << grade << endl;;
	}


	cout << max << endl;
	return 0;
}