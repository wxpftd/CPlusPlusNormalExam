#include <iostream>
#include "Circle.h"

using namespace std;

void qSort(Circle circles[], int l, int r)
{
    if (l>=r) 
        return ;
    Circle markCircle = circles[r];
    int i=l, j=r;
    while(i<j)
    {
        while(i<j && circles[i]<markCircle) 
            ++i;
        if (i<j)
            circles[j--] = circles[i];
        while(i<j && circles[j]>markCircle)
            --j;
        if (i<j)
            circles[i++] = circles[j]; 
    }
    circles[j] = markCircle;
    qSort(circles, l, j-1);
    qSort(circles, j+1, r);
}

int main(int argc, char *argv[])
{
    Circle *circles = new Circle[20];     
    for (int i = 0; i < 20; ++i)
    {
        circles[19-i].setRadius(i);
    }
    qSort(circles, 0, 19);
    for (int i = 0; i < 20; ++i)
    {
        cout << circles[i].getArea() << endl; 
    }

}
