#ifndef StackOfIntegets_H
#define StackOfIntegets_H
#include "MyEmptyStackException.h"

class StackOfIntegers
{
private:
	int size;
	int capacity;
	int *stack;
public:
	StackOfIntegers();
	~StackOfIntegers();
	void push_i(const int);
	int pop_i() throw(MyEmptyStackException);
	bool empty();
        int getSize();
};

#endif
