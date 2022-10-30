#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string	name;
public:
	Person() { name = "None"; }
	Person(string n);

	void display()
	{
		cout << name << endl;
	}

	friend ostream& operator<<(ostream& out, Person& p);
};

Person::Person(string n)
{
	name = n;
}

ostream& operator<<(ostream& out, Person& p)
{
	out << "person name: " << p.name << endl;
	return out;
}

class Project
{
private:
	char	code;
public:
	Project() { code = ' '; }
	Project(char c) { code = c; }

	void display()
	{
		cout << code << endl;
	}

	friend ostream& operator<<(ostream& out, Project& p);
};

ostream& operator<<(ostream& out, Project& p)
{
	out << "project code " << p.code << endl;
	return out;
}



class Employee : public Person
{
private:
	Project myProject;
	int	 id;

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

	friend ostream& operator<<(ostream& out, Employee& e)
	{
		out << (Person&)e << " "
			<< e.myProject << " "
			<< e.id << endl;
		return out;
	}
};


int main()
{
	Employee e("test", 'C', 20);
	cout << e;
	system("pause");
	return 0;
}
