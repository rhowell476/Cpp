#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Open a file
	ifstream input("state.txt");
	//Also used below:
	//ifstream input;
	//input.open("state.txt");

	if (input.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	// Read data
	char state[40];

	while (!input.eof()) // Continue if not end of file
	{
		//getline(input, city, '#');   /*getline identifier not found*/
		input.getline(state, 40, '#');
		cout << state << endl;
	}

	input.close();

	cout << "Dont" << endl;
	return 0;
}