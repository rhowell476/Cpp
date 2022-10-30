#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Person {
public:
	Person(string n)
	{
		//define constructor
	}
	void display();
	ostream& operator<<(ostream& out, Person& me) {};

private:
	string name;
};

#endif