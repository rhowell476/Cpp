#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class BMI
{
public:
	BMI()
	{
		name = "";
		age = 0;
		weight = 0;
		height = 0;
	}
	BMI(const string& newName, int newAge, double newWeight, double newHeight)
	{
		name = newName;
		age = newAge;
		weight = newWeight;
		height = newHeight;
	}
	BMI(const string& newName, double newWeight, double newHeight)
	{
		name = newName;
		age = 20;
		weight = newWeight;
		height = newHeight;
	}
	double getBMI() const
	{
		double kiloWeight = weight / 2.20462;
		double meterHeight = height / 39.37007;
		double bodyMassIndex;
		return bodyMassIndex = kiloWeight / pow(meterHeight, 2);
	}
	string getStatus() const
	{
		double kiloWeight = weight / 2.20462;
		double meterHeight = height / 39.37007;
		double bodyMassIndex = kiloWeight / pow(meterHeight, 2);

		if (bodyMassIndex < 18.5)
			return "Underweight";
		else if (bodyMassIndex >= 18.5 && bodyMassIndex < 25)
			return "Normal";
		else if (bodyMassIndex >= 25.0 && bodyMassIndex < 30)
			return "Overweight";
		else if (bodyMassIndex >= 30.0)
			return "Obese";
	}
	string getName() const
	{
		return name;
	}
private:
	string name; //enter string for name
	int age; //age in years
	double weight; //weight in lbs
	double height; //height in inches
};

int main ()
{
	BMI myself("Robert", 145, 66);
	cout << myself.getName() << " is " << myself.getStatus() << " with BMI of " << myself.getBMI();

	cout << endl << endl;
	string s1("Welcome to HTML");
	string s2 = s1.insert(11, "C++ and ");
	cout << s1 << endl; // s1 becomes Welcome to C++ and HTML
	cout << s2 << endl; // s2 becomes Welcome to C++ and HTML


	return 0;
}