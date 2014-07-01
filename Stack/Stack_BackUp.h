#ifndef Stack_H
#define Stack_H

export template <class T>
class Stack<T>
{
private:
	int size;
	int capacity;
	T *t;
public:
	Stack();
	~Stack();
	bool empty();
	void push_T(T);
	T pop_T();
	void printStack();
	bool contains(T);
};

#include "Stack.cpp"
#endif
