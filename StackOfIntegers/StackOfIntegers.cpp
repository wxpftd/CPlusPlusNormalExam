#include "StackOfIntegers.h"
#include "MyEmptyStackException.h"
#include <iostream>

StackOfIntegers::StackOfIntegers()
{
    this->size = -1;
    this->capacity = 1000;
    this->stack = new int[this->capacity];
}

StackOfIntegers::~StackOfIntegers()
{
    delete[] this->stack;
    this->stack = NULL;
}

void StackOfIntegers::push_i(const int num)
{
    if (this->size < this->capacity)
    {
        this->size++;
        *(this->stack + size) = num;
    }
    else
    {
        this->capacity *= 2;
        int *temp = new int[this->capacity];
        for (int i = 0; i <= size; i++)
        {
            *(temp + 1) = *(this->stack + i); 
        }
        *(temp + 1) = num;
        this->size++;	
        delete[] this->stack; 
        this->stack = temp;
    }
}

int StackOfIntegers::pop_i() throw(MyEmptyStackException)
{
    int temp;
    try
    {
        if(!empty())
        {
            temp = *(this->stack + size);
            this->size--;	
        }
        else
        {
            throw MyEmptyStackException();
        }
    }
    catch (MyEmptyStackException e)
    {
        std::cout << "StackOfIntegers::pop_i():" << e.what() <<std::endl;	
        throw e;
    }


    return temp;

}

bool StackOfIntegers::empty()
{
    if (size < 0)
        return true;
    else
        return false;
}

int StackOfIntegers::getSize()
{
    return this->size+1;
}
