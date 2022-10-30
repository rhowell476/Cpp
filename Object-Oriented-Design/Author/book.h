#ifndef BOOK_H
#define BOOK_H
#include "author.h"
#include <string>
#include <iostream>
using namespace std;

class Book
{
public:
	Book();
	Book(string name, Author author, double price ): name(name), author(author), price(price) {
		/*this->name = name;
		this->author = new author Author();
		this->author = Author();
		this->price = price;*/
	}
	string getName() const {
		return name;
	}
	Author getAuthor() const {
		return author;
	}
	double getPrice() const {
		return price;
	}
	void setPrice(double price) {
		this->price = price;
	}
	string print() {
		string print3 = author.print();
		return print3;
	}
private:
	string name;
	Author author;
	double price;
};
#endif