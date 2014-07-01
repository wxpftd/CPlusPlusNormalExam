#include <iostream>
#include "Circle.h"

using namespace std;

int main(int argc, char *argv[])
{
	Circle c1;
	Circle c2(2);
	if (c1 < c2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
