#pragma once

class Point
{
private:
	double x;
	double y;

public:
	void setXandY(); //Задаваме x и y от клавиатурата
	void print() const; //Принтираме точката
	double getX() const; //Взимаме x
	double getY() const; //Взимаме y
	double getDist(const Point& p) const; //Намираме разстоянието между две точки
};