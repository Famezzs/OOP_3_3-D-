//////////////////////////////////////////////////////////////
// EquilateralC.cpp
#include "EquilateralC.h"

EquilateralC::EquilateralC()
	:Triangle(), area(FindArea()) {}

EquilateralC::EquilateralC(double a)
	: Triangle(a, a, a), area(FindArea()) {}

EquilateralC::EquilateralC(const EquilateralC& cpy)
	: Triangle(cpy), area(cpy.area) {}

EquilateralC::EquilateralC(const Triangle& cpy)
	: Triangle(cpy), area(FindArea()) {}

double EquilateralC::FindArea() const
{
	return sqrt(3) / 4 * GetA() * GetA();
}

ostream& operator << (ostream& out, const EquilateralC& to_out)
{
	out << string(to_out) << endl;
	return out;
}

istream& operator >> (istream& in, EquilateralC& to_in)
{
	double a = 1;
	do
	{
		cout << "A = "; in >> a;
	} while (a <= 0);

	to_in.SetA(a);
	to_in.SetB(a);
	to_in.SetC(a);
	to_in.area = to_in.FindArea();

	return in;
}

EquilateralC::operator string() const
{
	stringstream sout;
	sout << Triangle::operator string() << ", Area = " << area;
	return sout.str();
}

EquilateralC& EquilateralC::operator=(const EquilateralC& cpy)
{
	Triangle::operator=(cpy);
	area = cpy.area;
	return *this;
}

EquilateralC& EquilateralC::operator++()
{
	Triangle::operator++();
	area = FindArea();
	return *this;
}

EquilateralC EquilateralC::operator++(int)
{
	EquilateralC tmp(*this);
	Triangle::operator++();
	area = FindArea();
	return tmp;
}

EquilateralC& EquilateralC::operator--()
{
	Triangle::operator--();
	area = FindArea();
	return *this;
}

EquilateralC EquilateralC::operator--(int)
{
	EquilateralC tmp(*this);
	Triangle::operator--();
	area = FindArea();
	return tmp;
}