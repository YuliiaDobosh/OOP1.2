#pragma once
#include <string >
using namespace std;		
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

	double getSquare()const { return 3.14 * R * R; } //площа
	double getLength() const { return 2. * 3.14 * R; } // довжина

	bool Init(double x, double y, double R);
	void Read();
	void Display() const;
};

