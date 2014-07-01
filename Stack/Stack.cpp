#include <iostream>
#include "Stack.h"

template <class T>
Stack<T>::Stack()
{
	size = -1;
	capacity = 1000;
	this->stack = new T[capacity];	
}

template <class T>
Stack<T>::~Stack()
{
	delete[] this->stack;
	this->stack = NULL;
}

template <class T>
bool Stack<T>::empty()
{
	if (size < 0)
		return true;
	else
		return false;
}

template <class T>
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

template <class T>
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

template <class T>
void Stack<T>::printStack()
{
	for (int i = 0; i <= size; i++)
	{
		std::cout << (*(this->stack + i)) << std::endl;		
	}
}

template <class T>
bool Stack<T>::contains(T element)
{
	for (int i = 0; i <= size; i++)
	{
		if ((*(this->stack + i)) == element)	
			return true;
	}
	return false;
}

