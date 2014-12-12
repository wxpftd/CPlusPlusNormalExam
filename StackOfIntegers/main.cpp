#include <iostream>
#include <cmath>
#include "StackOfIntegers.h"

using namespace std;

bool primeNum(int);
void invertedFactor(int, StackOfIntegers&);

int main(int argc, char *argv[])
{
    StackOfIntegers stack;
    invertedFactor(120, stack);
    try
    {
        while(!stack.empty())
        {
            cout << stack.getSize() << endl;
            cout << stack.pop_i() << endl;
        }
        //stack.pop_i();
    }
    catch(...)
    {

    }

    cout << endl;
    //cout << primeNum(24) << endl;
    return 0;
}

void invertedFactor(int num, StackOfIntegers &stack)
{
    if (num == 1)
    {
        return;
    }
    int i = 2;
    while(num != 1)
    {
        if (primeNum(i) && num % i == 0)
        {
            stack.push_i(i);
            num /= i;
            i = 2;
        }
        else
            i++;
    }
}

bool primeNum(int num)
{
    for (int i = 2; i < sqrt(num+1); i++)
    {
        if (num % i == 0)
        {
            return false;	
        }
    }
    return true;
}
