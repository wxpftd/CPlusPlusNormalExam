#ifndef My3DPoint_H
#define My3DPoint_H
#include "MyPoint.h"

class My3DPoint:public MyPoint
{
private:
	double z;
public:
	My3DPoint();
	My3DPoint(double, double, double);
	double getZ();
	double distance(MyPoint *point);
	double getPerimeter();
};



#endif
