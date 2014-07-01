#ifndef Stack_H
#define Stack_H
#include <iostream>

template <typename T> class Stack
{
private:
	int size;
	int capacity;
	T *stack;
public:
	Stack();
	~Stack();
	bool empty();
	void push_T(T);
	T pop_T();
	void printStack();
	bool contains(T);
};

template <typename T>
Stack<T>::Stack()
{
	size = -1;
	capacity = 1000;
	this->stack = new T[capacity];	
}

template <typename T>
Stack<T>::~Stack()
{
	delete[] this->stack;
	this->stack = NULL;
}

template <typename T>
bool Stack<T>::empty()
{
	if (size < 0)
		return true;
	else
		return false;
}

template <typename T>
void Stack<T>::push_T(T element)
{
	if (size < capacity)
	{
		size++;
		(*(this->stack + size)) = element;
	}
	else
	{
		capacity *= 2;
		T *temp = new T[capacity];
		size++;
		for (int i = 0; i < size; i++)
		{
			(*(temp + i)) = (*(this->stack + i));	
		}
		(*(temp + size)) = element;	
		delete[] this->stack;
		this->stack = temp;
	}
}

template <typename T>
T Stack<T>::pop_T()
{
	T temp;
	if (!this->empty())
	{
		temp = (*(this->stack + size));
		size--;
		return temp;
	}
	else
	{
		return 0;	
	}
}

template <typename T>
void Stack<T>::printStack()
{
	for (int i = 0; i <= size; i++)
	{
		std::cout << (*(this->stack + i)) << std::endl;		
	}
}

template <typename T>
bool Stack<T>::contains(T element)
{
	for (int i = 0; i <= size; i++)
	{
		if ((*(this->stack + i)) == element)	
			return true;
	}
	return false;
}

#endif
