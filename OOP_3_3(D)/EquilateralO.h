//////////////////////////////////////////////////////////////
// EquilateralO.h
#pragma once
#include "Triangle.h"
class EquilateralO :
    public Triangle
{
private:
	double area;
public:
	EquilateralO();
	EquilateralO(double);
	EquilateralO(const EquilateralO&);
	EquilateralO(const Triangle&);
	double GetArea() const { return area; };
	double FindArea() const;
	friend ostream& operator << (ostream&, const EquilateralO&);
	friend istream& operator >> (istream&, EquilateralO&);
	operator string() const;
	EquilateralO& operator = (const EquilateralO&);
	EquilateralO& operator ++();
	EquilateralO operator ++(int);
	EquilateralO& operator --();
	EquilateralO operator --(int);
};