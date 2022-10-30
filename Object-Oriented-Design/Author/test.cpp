#include <iostream>
#include "book.h"
#include "author.h"
using namespace std;

int main() {
	Author George("George R. R. Martin", "george@rr.martin", 'm');
	cout << George.print() << endl;
	double newprice = 15;
	Book anyThing("ABS", George, newprice);
	cout << anyThing.getName() << endl;
	cout << anyThing.getPrice() << endl;
	cout << anyThing.print();
	return 0;
}