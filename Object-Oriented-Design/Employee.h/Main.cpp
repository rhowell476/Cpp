#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person() { name = "None"; }
	Person(string n)
	{
		name = n;
	}
	void display()
	{
		cout << name << endl;
	}
	friend ostream& operator<<(ostream& out, Person& me)
	{
		out << "Person name: " << me.name << endl;
		return out;
	}
	

private:
	string name;
};

class Project {
public:
	Project() { code = ' '; }
	Project(char c) {
		code = c;
	}
	void display()
	{
		cout << "Project object code is: " << code;
	}
	friend ostream& operator<<(ostream& out, Project& me)
	{
		out << "project code: " << me.code << endl;
		return out;
	}

private:
	char code;
};

class Employee : public Person {
public:
	Employee(string name, char pCode, int i) : Person(name)
	{
		myProject = Project(pCode);
		id = i;
	}
	void display()
	{
		Person::display();
		myProject.display();
		cout << id << endl;
	}
	friend ostream& operator<<(ostream& out, Employee& me)
	{
		out << (Person&)me << " "
			<< me.myProject << "Id: "
			<< me.id << endl;
		return out;
	}

private:
	int id;
	Project myProject;
};



int main() {
	Project newProject('R');
	Employee newEmployee("Robert", 'H', 0);
	Person newPerson("John");

	cout << newEmployee;

	return 0;
}