#include "complex.h"

//constructors
complex::complex(int a, int b)
{
	x = a;
	y = b;
}

//operattors
complex complex::operator+ (complex k)
{
	complex res(x + k.x, y + k.y);
	return res;
}

complex complex::operator- (complex k)
{
	complex res (x - k.x, y - k.y);
	return res;
}

complex complex::operator* (complex k)
{
	complex res(x * k.x - y * k.y, x * k.y + y * k.x);
	return res;
}

complex complex::operator/ (complex k)
{
	complex res((x * k.x + y * k.y) / (k.x * k.x + k.y * k.y), (y * k.x - x * k.y) / (k.x * k.x + k.y * k.y));
	return res;
}

//functions

//module
int complex::mod()
{
	return sqrt(x * x + y * x);
}

//show
void complex::show()
{
	std::cout << x << " " << y << std::endl;
}

//set number
void complex::set(int a, int b)
{
	x = a;
	y = b;
}