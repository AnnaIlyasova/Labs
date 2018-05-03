#include <stdio.h>
#include <math.h>
#include "Task3.h"

int main(void)
{
    const double x = 0.5;
	const double y = 0.7;
	
	printf("Hello!\n");

	printf("%10.4f",func(x,y));
	
	getchar();
	return 0;
}

double func(double x, double y)
{
	double ret;
	ret = pow(cos(x),4)+pow(sin(y),2)+(pow(sin(2*x),2)/4)-1;
	return ret;
}