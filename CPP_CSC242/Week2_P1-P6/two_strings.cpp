#include <iostream>
#include <string>
using namespace std;

int main()
{

	string first;
	string second;
	// gather info from user -- two strings
	cout << "Enter a 5 character string: " << endl;
	getline(cin, first);
	cout << "Enter a 5 character string: " << endl;
	getline(cin, second);

	// convert string to characters
	char one = first.at(0);
	char two = first.at(1);
	char three = first.at(2);
	char four = first.at(3);
	char five = first.at(4);

	char six = second.at(0);
	char seven = second.at(1);
	char eight = second.at(2);
	char nine = second.at(3);
	char ten = second.at(4);


	// compare characters
	cout << "Common characers are: ";

	if (one == six || one == seven || one == eight || one == nine || one == ten)
		cout << one;
	if (two == six || two == seven || two == eight || two == nine || two == ten)
		cout << two;
	if (three == six || three == seven || three == eight || three == nine || three == ten)
		cout << three;
	if (four == six || four == seven || four == eight || four == nine || four == ten)
		cout << four;
	if (five == six || five == seven || five == eight || five == nine || five == ten)
		cout << five;

	return 0;
}