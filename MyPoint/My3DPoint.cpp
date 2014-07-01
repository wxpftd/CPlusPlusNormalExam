#include <cmath>
#include "My3DPoint.h"

My3DPoint::My3DPoint()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

My3DPoint::My3DPoint(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

double My3DPoint::getZ()
{
	return this->z;
}

double My3DPoint::distance(MyPoint *point)
{
	My3DPoint *dpoint = dynamic_cast<My3DPoint*>(point);
	return sqrt((this->x - dpoint->x)*(this->x - dpoint->x) + (this->y - dpoint-> y)*(this->y - dpoint-> y) + (this->z - this->z) * (this->z - this->z));
}

double My3DPoint::getPerimeter()
{
	
}

