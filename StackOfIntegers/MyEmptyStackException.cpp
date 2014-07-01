#include "MyEmptyStackException.h"

const char* MyEmptyStackException::what() const throw()
{
	return "EmptyStackException.";
}
