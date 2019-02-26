#pragma once
#include "Point.h"
class Triangle
{
private:
	double sideA;
	double sideB;
	double sideC;

	Point a;
	Point b;
	Point c;

public:
	void setPoints(const Point& a, const Point& b, const Point& c);
	void typeOfTriangle() const;
	bool validTriangle() const;
};

