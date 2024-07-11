#include <iostream>

#include "complex.h"

using namespace std;

int main()
{
	complex a(2, 4), b, c;
	b.set(1, 2);
	c = a + b;
	c.show();
	c = c - b;
	c.show();
	c = a * b;
	c.show();
	c = a / b;
	c.show();
	int r = c.mod();
	cout << r << endl;
	return 0;
}