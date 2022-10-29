#include <iostream>
using namespace std;

void printGrade(double score)
{
	if (score < 0 || score > 100)
	{
		cout << "Invalid score";
		return;
		//exit(1);
	}
	if (score >= 90.0)
		cout << 'A' << endl;
	else if (score >= 80.0)
		cout << 'B' << endl;
	else if (score >= 70.0)
		cout << 'C' << endl;
	else if (score >= 60.0)
		cout << 'D' << endl;
	else 
		cout << 'F' << endl;

}

int main()
{
	cout << "Enter a score: ";
	double score;
	cin >> score;

	cout << "The grade is ";
	printGrade(score);

	return 0;
}