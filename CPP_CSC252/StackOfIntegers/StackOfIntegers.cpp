#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
	StackOfIntegers stack;

	for (int i = 0; i < 10; i++)
		stack.push(i);

	for (int i = 10; i < 21; i++)
		stack.push(i);

	stack.push(21);
	stack.push(21);
	cout << "\nstack.getSize() is: " << stack.getSize() << endl;
	cout << "stack.peek() is: " << stack.peek() << endl;
	cout << "StackOfIntegers \"stack\" contains: " << endl;

	cout << "stack.getIndexValue(1) is: " << stack.getIndexValue(1) << endl;

	while (!stack.isEmpty())
		cout << stack.pop() << " ";


	return 0;
}