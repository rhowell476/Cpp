#ifndef PROJECT_H
#define PROJECT_H
#include "Employee.h"
using namespace std;

class Employee : Person {
public:
	Employee(string name, char pCode, int i)
	{
		//define constructor
	}
	void display();
	ostream& operator<<(ostream& out, Employee& me)
	{
		// define operator function
	}

private:
	int id;
};

#endif