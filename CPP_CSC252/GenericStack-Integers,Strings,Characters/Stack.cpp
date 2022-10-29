#include <iostream>
#include "Stack.h"
#include<string>
using namespace std;

template<typename T>
void printStack(Stack<T>& stack)
{
	while (!stack.empty())
		cout << stack.pop() << " ";
	cout << endl;
}

int main()
{
	Stack<int> intStack;

	for (int i = 0; i < 10; i++)
		intStack.push(i);

	for (int i = 10; i < 21; i++)
		intStack.push(i);

	intStack.push(21);
	intStack.push(21);
	cout << "\nstack.getSize() is: " << intStack.getSize() << endl;
	cout << "stack.peek() is: " << intStack.peek() << endl;
	cout << "StackOfIntegers \"stack\" contains: " << endl;

	cout << "stack.getIndexValue(1) is: " << intStack.getIndexValue(1) << endl;

	while (!intStack.isEmpty())
		cout << intStack.pop() << " ";

	Stack<char> charStack;
	for (int i = 0; i < 10; i++)
		charStack.push('A' + i);
	cout << "\nstack2.getSize() is: " << charStack.getSize() << endl;

	while (!charStack.isEmpty())
		cout << charStack.pop() << " ";
	cout << endl;

	Stack<string> stringStack;
	stringStack.push("Chicago");
	stringStack.push("Denver");
	stringStack.push("London");
	printStack(stringStack);


	return 0;
}