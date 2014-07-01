#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

Circle::~Circle()
{
	
}

double Circle::getArea() const
{
	return 3.14 * this-> radius * this->radius;
}

bool Circle::operator < (const Circle& circle)
{
	if (this->getArea() < circle.getArea())
		return true;
	else
		return false;
}

bool Circle::operator <= (const Circle& circle)
{
	if (this->getArea() <= circle.getArea())
		return true;
	else
		return false;
}

bool Circle::operator == (const Circle& circle)
{
	if (this->getArea() == circle.getArea())
		return true;
	else
		return false;
}

bool Circle::operator != (const Circle& circle)
{
	if (this->getArea() != circle.getArea())
		return true;
	else
		return false;
}

bool Circle::operator > (const Circle& circle)
{
	if (this->getArea() > circle.getArea())
		return true;
	else
		return false;
}

bool Circle::operator >= (const Circle& circle)
{
	if (this->getArea() >= circle.getArea())
		return true;
	else
		return false;
}

