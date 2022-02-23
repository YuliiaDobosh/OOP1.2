#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
	Circle g;
	g.Read();
	g.Display();
	cout << "Square = " << g.getSquare() << endl;
	cout << "Length =  " << g.getLength() << endl;
	return 0;
}

