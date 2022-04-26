//////////////////////////////////////////////////////////////
// Source.cpp
#include "EquilateralO.h"
#include "EquilateralC.h"

int main()
{
	Triangle a;
	EquilateralO b;
	EquilateralC c;

	cout << "Triangle :\n";
	cin >> a;
	cout << a;

	cout << "\nEquilateralO :\n";
	cin >> b;
	cout << b;

	cout << "\nEquilateralC :\n";
	cin >> c;
	cout << c;

	cout << "\n++Triangle :\n";
	cout << ++a;

	cout << "\n++EquilateralO :\n";
	cout << ++b;

	cout << "\n++EquilateralC :\n";
	cout << ++c;

	return 0;
}