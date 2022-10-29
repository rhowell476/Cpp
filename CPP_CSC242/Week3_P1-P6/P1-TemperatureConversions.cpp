#include <iostream>
#include <iomanip>
using namespace std;

// function returns celsius to fahrenheit
//celsius = 5.0 / 9.0 * (fahrenheit - 32);
double equalsFahrenheit (int temp)
{
	double celsius = (5.0 / 9.0 * (temp - 3200)) / 100;
	return celsius;
}

// function returns fahrenheit to celsius
//fahrenheit = 9.0 / 5.0 * celsius + 32;
double equalsCelsius (int temp)
{
	double fahrenheit = ((9.0 / 5.0) * (temp) + 3200) / 100;
	return fahrenheit;
}

int main ()
{
	double tempFahrenheit = 0;
	double tempCelsius = 0;
	double toCelsius = 0;
	double toFahrenheit = 0;

	// call for fahrenheit and change to celsius
	cout << "Enter degrees in Fahrenheit (ex: 65.1): " << endl;
	cin >> tempFahrenheit;

	toCelsius = equalsFahrenheit(tempFahrenheit * 100);

	// display result
	cout << "Temperature in Celsius is: " << fixed << setprecision(2) << toCelsius 
		<< endl << endl << endl;

	// call for fahrenheit and change to celsius
	cout << "Enter degrees in Celsius (ex: 22.5): " << endl;
	cin >> tempCelsius;

	toFahrenheit = equalsCelsius(tempCelsius * 100);

	// display result
	cout << "Temperature in Fahrenheit is: " << fixed << setprecision(2) << toFahrenheit;

	return 0;
}