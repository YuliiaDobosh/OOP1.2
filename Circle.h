#pragma once
#include <string>
#include <cmath>
using namespace std;
static double Pi = 4 * atan(1);
class Circle
{
private:
	double x;
	double y;
	double R;

public:
	double getx() const { return x; }
	double gety() const { return y; }
	double getR() const { return R; }

	void setx(double);
	void sety(double);
	bool setR(double);

	double getSquare()const { return Pi * Pi * R; } //площа
	double getLength() const { return 2. * Pi * R; } // довжина

	bool Init(double x, double y, double R);
	void Read();
	void Display() const;
};

