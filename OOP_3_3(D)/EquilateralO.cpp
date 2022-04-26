//////////////////////////////////////////////////////////////
// EquilateralO.cpp
#include "EquilateralO.h"

EquilateralO::EquilateralO() 
	:Triangle(), area(FindArea()) {}

EquilateralO::EquilateralO(double a)
	:Triangle(a,a,a), area(FindArea()) {}

EquilateralO::EquilateralO(const EquilateralO& cpy) 
	:Triangle(cpy), area(cpy.area) {}

EquilateralO::EquilateralO(const Triangle& cpy) 
	:Triangle(cpy), area(FindArea()) {}

double EquilateralO::FindArea() const
{
	return sqrt(3) / 4 * GetA() * GetA();
}

ostream& operator << (ostream& out, const EquilateralO& to_out)
{
	out << string(to_out) << endl;
	return out;
}

istream& operator >> (istream& in, EquilateralO& to_in)
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

EquilateralO::operator string() const
{
	stringstream sout;
	sout << Triangle::operator string() << ", Area = " << area;
	return sout.str();
}

EquilateralO& EquilateralO::operator=(const EquilateralO& cpy)
{
	Triangle::operator=(cpy);
	area = cpy.area;
	return *this;
}

EquilateralO& EquilateralO::operator++()
{
	Triangle::operator++();
	area = FindArea();
	return *this;
}

EquilateralO EquilateralO::operator++(int)
{
	EquilateralO tmp(*this);
	Triangle::operator++();
	area = FindArea();
	return tmp;
}

EquilateralO& EquilateralO::operator--()
{
	Triangle::operator--();
	area = FindArea();
	return *this;
}

EquilateralO EquilateralO::operator--(int)
{
	EquilateralO tmp(*this);
	Triangle::operator--();
	area = FindArea();
	return tmp;
}