#ifndef STACK_H
#define STACK_H

class StackOfIntegers
{
public:
	StackOfIntegers(); //create a stack
	bool isEmpty() const; //returns true is StackOfIntegers is empty
	int peek() const; //returns integer at the top of the stack without removing it
	void push(int value); //stores an integer into the top of the stack
	int pop(); //removes the integer at the top of the stack and returns it
	int getSize() const; //returns the number of elements in the stack
	int getIndexValue(int index) const;

private:
	int elements[100];
	int size;
};

#endif