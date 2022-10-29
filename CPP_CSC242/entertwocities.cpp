#include <iostream>
#include <string>
using namespace std;

int main (){
	string city;
	string city2;

	cout << "Enter a city: " << endl;
	getline(cin, city);
	cout << "Enter a second city: ";
	getline(cin, city2);

	//convert capital first letter to lowercase
	char hexletter = static_cast<int>(city[0]);
	char hexletter2 = static_cast<int>(city2[0]);
	if (hexletter >= 65 && hexletter <= 90)
		hexletter = (hexletter - 'A') + 'a';
	if (hexletter2 >= 65 && hexletter2 <= 90)
		hexletter2 = (hexletter2 - 'A') + 'a';

	// sort cities alphabetically
	if (hexletter < hexletter2)
		cout << city << endl << city2;
	else if (hexletter2 < hexletter)
		cout << city2 << endl << city;
}