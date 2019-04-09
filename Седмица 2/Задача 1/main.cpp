#include <iostream>
#include "Point.h"
#include "Triangle.h"
int main()
{
    Point a, b,c;
    Triangle d;

    a.setXandY();
    b.setXandY();
    c.setXandY();

    d.setPoints(a,b,c);

    d.typeOfTriangle();

    std::cout << d.validTriangle();

	return 0;
}