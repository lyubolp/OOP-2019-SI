#include "Rational.h"
#include <iostream>


Rational::Rational(int a, int b):numerator(a), denominator(b) {}
Rational::Rational(const Rational& rhs)
{
	numerator = rhs.numerator;
	denominator = rhs.denominator;
}

void Rational::setNum(int a) { numerator = a; }
void Rational::setDenom(int a) { denominator = a; }
void Rational::print() const
{
	std::cout << numerator << "/" << denominator << std::endl;
}


int Rational::getNum() const { return numerator; }
int Rational::getDenom()const { return denominator; }


Rational Rational::add(const Rational& b) const
{
	Rational c;

	c.denominator = this->denominator * b.denominator;
	c.numerator = denominator*b.numerator + b.denominator*numerator;

	return c;
}

Rational Rational::operator+(Rational& rhs) const
{
	return add(rhs);
}

bool Rational::operator==(Rational& rhs) const
{
	if(numerator / denominator == rhs.numerator / rhs.denominator && numerator % denominator == rhs.numerator % rhs.denominator)
	{
		return true;
	}
	else return false;
}
bool Rational::operator!=(Rational& rhs) const
{
	return !(*this == rhs);
}
bool Rational::operator<(Rational& rhs) const
{
	if((double)numerator / (double)denominator < (double)rhs.numerator / (double)rhs.denominator) return true;
}

std::ostream& operator << (std::ostream& out, const Rational& r)
{
    out << r.numerator << "/" << r.denominator;
    return out;
}