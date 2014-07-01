#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, char *argv[])
{
	Stack<int> stack;
	for (int i = 0; i < 2000; i ++)
	{
		stack.push_T(i);	
	}

	stack.printStack();	
	
	return 0;
}
