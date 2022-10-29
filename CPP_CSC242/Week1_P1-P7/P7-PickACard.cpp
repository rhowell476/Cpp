#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// use rand function to generate random number
	srand(time(0));
	int face = (rand() % 13) + 1;

	cout << "Your card is ";

	// account numbers to face value using switch statement
	switch (face)
	{
		case 1: cout << "Ace";
			break;
		case 2: cout << "2";
			break;
		case 3: cout << "3";
			break;
		case 4: cout << "4";
			break;
		case 5: cout << "5";
			break;
		case 6: cout << "6";
			break;
		case 7: cout << "7";
			break;
		case 8: cout << "8";
			break;
		case 9: cout << "9";
			break;
		case 10: cout << "10";
			break;
		case 11: cout << "Jack";
			break;
		case 12: cout << "Queen";
			break;
		case 13: cout << "King";
			break;

	}

	cout << " of ";

	// pick a suit using rand() and switch statement
	int suit = (rand() % 4) + 1;

	switch (suit)
	{
		case 1: cout << "Hearts";
			break;
		case 2: cout << "Diamonds";
			break;
		case 3: cout << "Clubs";
			break;
		case 4: cout << "Spades";
			break;
	}

	return 0;
}