#include <iostream>
#include "Triangle.h"
void Triangle::setPoints(const Point& a, const Point& b, const Point& c)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->sideA = a.getDist(b);
	this->sideB = b.getDist(c);
	this->sideC = c.getDist(a);
}
void Triangle::typeOfTriangle() const
{
	//Проверка за страните
	if(sideA == sideB && sideB == sideC)
    {
        std::cout << "Equal sided";
    }
    else if((sideA == sideB && sideB != sideC) || (sideC == sideB && sideB != sideA) || (sideA == sideC && sideB != sideC))
    {
        std::cout << "Two sides are equal";
    }
    else
    {
        std::cout << "No equal sides";
    }   
}
bool Triangle::validTriangle() const
{
	/*
	Проверка за валиден триъгълник:
		Сборът на всеки две страни трябва да е по-голям от третата
	*/
	return (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA);
}
