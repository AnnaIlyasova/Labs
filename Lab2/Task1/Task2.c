#include <math.h>
#include <stdio.h>

double func_2(double x)
{
	double System;
	System = x < 3.2 ? pow(x,4)+9 : 54*pow(x,4)/(-5*pow(x,2)+7);
	return System;
}


