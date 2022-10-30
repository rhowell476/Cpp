#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
#include <iostream>
using namespace std;

class Author {
public:
	Author();
	Author(string name, string email, char gender) {
		this->name = name;
		this->email = email;
		this->gender = gender;
	}
	string getName() const{
		return name;
	}
	string getEmail() const{
		return email;
	}
	void setEmail(string email) {
		this->email = email;
	}
	string getGender(){
		string s(1, gender);
		return s;
	}
	string print() {
		string print2 = name + " (" + gender + ") at " + email;
		return print2;
	}

private:
	string name;
	string email;
	char gender;
};
#endif