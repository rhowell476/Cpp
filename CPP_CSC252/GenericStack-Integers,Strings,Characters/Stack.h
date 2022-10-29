#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:
	Stack(); //create a stack
	Stack(const Stack&);
	~Stack();
	bool empty() const; //return empty stack
	bool isEmpty() const; //returns true is StackOfIntegers is empty
	T peek() const; //returns integer at the top of the stack without removing it
	void push(T value); //stores an integer into the top of the stack
	T pop(); //removes the integer at the top of the stack and returns it
	int getSize() const; //returns the number of elements in the stack
	int getIndexValue(int index) const;

private:
	T* elements;
	int size;
	int capacity;
	void ensureCapacity();
};

template<typename T>
Stack<T>::Stack(): size(0), capacity(16)
{
	elements = new T[capacity];
}

template<typename T>
Stack<T>::Stack(const Stack& stack)
{
	elements = new T[stack.capacity];
	size = stack.size;
	capacity = stack.capacity;
	for (int i = 0; i < size; i++)
	{
		elements[i] = stack.elements[i];
	}
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] elements;
}

template<typename T>
bool Stack<T>::empty() const
{
	return size == 0;
}

template<typename T>
bool Stack<T>::isEmpty() const
{
	return size == 0;
}

template<typename T>
T Stack<T>::peek() const
{
	return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
	ensureCapacity();
	elements[size++] = value;
}

template<typename T>
void Stack<T>::ensureCapacity()
{
	if (size >= capacity)
	{
		T* old = elements;
		capacity = 2 * size;
		elements = new T[size * 2];

		for (int i = 0; i < size; i++)
			elements[i] = old[i];

		delete [] old;
	}
}

template<typename T>
T Stack<T>::pop()
{
	return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
	return size;
}

template<typename T>
int Stack<T>::getIndexValue(const int index) const
{
	return elements[index];
}

#endif