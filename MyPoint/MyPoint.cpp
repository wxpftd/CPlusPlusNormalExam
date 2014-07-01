#include "MyPoint.h"
#include <cmath>

MyPoint::MyPoint()
{
	this->x = 0;
	this->y = 0;
}

MyPoint::MyPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

double MyPoint::getX()
{
	return this->x;
}

double MyPoint::getY()
{
	return this->y;
}

double MyPoint::distance(MyPoint *point)
{
	return sqrt((this->x - point->x) * (this->x - point->x) + (this->y - point->y) * (this->y - point->y));	
}

