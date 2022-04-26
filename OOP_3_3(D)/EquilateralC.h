//////////////////////////////////////////////////////////////
// EquilateralC.h
#pragma once
#include "Triangle.h"
class EquilateralC :
    private Triangle
{
private:
	double area;
public:
	EquilateralC();
	EquilateralC(double);
	EquilateralC(const EquilateralC&);
	EquilateralC(const Triangle&);
	double GetArea() const { return area; };
	double FindArea() const;
	friend ostream& operator << (ostream&, const EquilateralC&);
	friend istream& operator >> (istream&, EquilateralC&);
	operator string() const;
	EquilateralC& operator = (const EquilateralC&);
	EquilateralC& operator ++();
	EquilateralC operator ++(int);
	EquilateralC& operator --();
	EquilateralC operator --(int);
};

