#ifndef Circle_H
#define Circle_H

class Circle
{
private:
	double radius;
public:
	Circle();
	~Circle();
	Circle(double);
        void setRadius(double);
	double getArea() const;

	bool operator < (const Circle&);
	bool operator <= (const Circle&);
	bool operator == (const Circle&);
	bool operator != (const Circle&);
	bool operator > (const Circle&);
	bool operator >= (const Circle&);

	//friend istream& operator >> (istream&, Circle&);
	//friend ostream& operator << (ostream&, Circle&);


};

#endif
