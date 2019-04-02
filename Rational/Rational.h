#include <iostream>
#pragma once
class Rational
{
private:
	int numerator;
	int denominator;

public:
    Rational(int a= 0, int b = 1); //Конструктор с два параметъра, с аргументи по подразбиране
	Rational(const Rational&); //Конструктор за копиране
	void setNum(int a);
	void setDenom(int a);
	void print() const;

	int getNum() const;
	int getDenom() const;

	Rational add(const Rational& b) const;

	Rational operator+(Rational& b) const;
	bool operator==(Rational& b) const;
	bool operator!=(Rational& b) const;
	bool operator<(Rational& b) const;

	friend std::ostream& operator << (std::ostream& out, const Rational&);
};