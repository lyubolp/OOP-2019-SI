#include "Point.h"
#include <iostream>
#include <cmath>
void Point::setXandY()
{
	std::cin >> x >> y;
}

void Point::print() const
{
	std::cout << "(" << x << "," << y << ")";
}
double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getDist(const Point& p) const
{
	double result;

	result = sqrt(
		pow(x- p.x, 2) + pow(y-p.y, 2) //Формула за намиране на разстояние между две точки в 2d пространство
	);

	return result;
}