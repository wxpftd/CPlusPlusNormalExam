#ifndef MyPoint_H
#define MyPoint_H

class MyPoint
{
protected:
	double x;
	double y;

public:
	MyPoint();
	MyPoint(double x, double y);
	double getX();
	double getY();
	virtual double distance(MyPoint *point);
	
};



#endif
