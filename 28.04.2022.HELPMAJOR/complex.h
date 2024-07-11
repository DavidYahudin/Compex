#pragma once

#include <iostream>
#include <math.h>

class complex
{
private:
	int x, y;
public:
	//constructors
	complex() {};

	complex(int a, int b);
	
	//operattors
	complex operator+ (complex);

	complex operator- (complex);

	complex operator* (complex);

	complex operator/ (complex);

	//functions

	//module
	int mod(void);

	//show
	void show();

	//set
	void set(int, int);
};