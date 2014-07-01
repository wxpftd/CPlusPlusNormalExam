#include <iostream>
#include "MyPoint.h"
#include "My3DPoint.h"

using namespace std;

int main(int argc, char *argv[])
{
	My3DPoint point1(0, 0, 0);
	My3DPoint point2(10, 30, 25.5);
	cout << "Two points' distance is " << point1.distance(&point2) << endl;

	return 0;	
}
