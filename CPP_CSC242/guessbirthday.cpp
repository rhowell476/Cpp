#include <iostream>
using namespace std;

int main()
{
	int day = 0; //Day to be determined
	char answer;

	// Prompt the user for Set1
	cout << "Is your birthday in Set1?" << endl;
	cout << "	1	3	5	7\n" <<
			"	9	11	13	15\n" <<
			"	17	19	21	23\n" <<
			"	25	27	29	31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		day +=1;

	// Prompt the user for Set2
	cout << "\nIs your birthday in Set2?" << endl;
	cout << "	2	3	6	7\n" <<
			"	10	11	14	15\n" <<
			"	18	19	22	23\n" <<
			"	26	27	30	31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		day += 2;

	// Prompt the user for Set3
	cout << "\nIs your birthday in Set3?" << endl;
	cout << "	4	5	6	7\n" <<
			"	12	13	14	15\n" <<
			"	20	21	22	23\n" <<
			"	28	29	30	31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		day += 4;

	// Prompt the user for Set4
	cout << "\nIs your birthday in Set4?" << endl;
	cout << "	8	9	10	11\n" <<
			"	12	13	14	15\n" <<
			"	24	25	26	27\n" <<
			"	28	29	30	31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		day += 8;

	// Prompt the user for Set5
	cout << "\nIs your birthday in Set5?" << endl;
	cout << "	16	17	18	19\n" <<
			"	20	21	22	23\n" <<
			"	24	25	26	27\n" <<
			"	28	29	30	31" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		day += 16;

	cout << "Your birthday is " << day << endl;

	return 0;
}

/*
This game is easy to program. You may wonder how the game was created.
The mathematics behind the game is actually quite simple. The numbers
are not grouped together by accident—the way they are placed in the five
sets is deliberate. The starting numbers in the five sets are 1, 2, 4, 8,
 and 16, which correspond to 1, 10, 100, 1000, and 10000 in binary 
 (binary numbers are introduced in Appendix D, Number Systems). A binary
 number for decimal integers between 1 and 31 has at most five digits, as
 shown in Figure 4.1a. Let it be b5b4b3b2b1. Thus, b5b4b3b2b1 = b50000 +
 b4000 + b300 + b20 + b1, as shown in Figure 4.1b. If a day’s binary number
  has a digit 1 in bk, the number should appear in Setk. For example, 
 number 19 is binary 10011, so it appears in Set1, Set2, and Set5. It is
  binary 1 + 10 + 10000 = 10011 or decimal 1 + 2 + 16 = 19. Number 31 is 
  binary 11111, so it appears in Set1, Set2, Set3, Set4, and Set5. It is 
 binary 1 + 10 + 100 + 1000 + 10000 = 11111 or decimal 1 + 2 + 4 + 8 + 16 = 31. */

/*
	Decimal 		Binary 		b(5) 0	0	0	0							10000
	1				00001			b(4)0	0	0							 1000
	2				00010				b(3)0	0			1000			  100
	3				00100					b(2)0			  10			   10
	...							+				b(1)		+  1				1
	19				10011		__________________			_____  			______
	...
	31				11111		b(5)b(4)b(3)b(2)b(1)		10011			11111
															19				31
															*/