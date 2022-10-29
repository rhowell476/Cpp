#include <iostream>
#include <ctime> //needed for time function
#include <cstdlib> //needed for srand and rand functions
using namespace std;

int main()
{
	int correctCount = 0;
	int count = 0;
	long startTime = time(0);
	const int NUMBER_OF_QUESTIONS = 5;

	srand(time(0)); // set a random seed

	while (count < NUMBER_OF_QUESTIONS)
	{
		// 1. Generate two random single-digit integers
		int number1 = rand() % 100;
		int number2 = rand() % 100;

		// 2. if number 1 < number2, swap number1 with number2
		if (number1 < number2)
		{
			int temp = number1;
			number1 = number2;
			number2 = temp;
		}

		// 3. Prompt the student to answer "what is number1-number2?"
		int guess;
		cout << "What is " << number1 << " - " << number2 << "?" << endl;
		cin >> guess;

		// 4. Grade the answer and display the result
		if (number1 - number2 == guess)
		{
			cout << "You are right!" << endl << endl;
			correctCount++;
		}
		else
			cout << "Your answer is wrong.\n" << number1 << " - " << 
				number2 << " = " << (number1 - number2) << endl << endl;

		// Increase the count
		count++;
	}

	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Correct count it " << correctCount << "\nTest time is " << testTime << " seconds\n";
	return 0;
}