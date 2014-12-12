#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stack<int> stack;
    for (int i=0; i<20; i++)
    {
        stack.push_T(i);	
    }

    stack.printStack();	
    cout << stack.contains(10) << endl;;
    cout << stack.contains(30) << endl;;

    return 0;
}
