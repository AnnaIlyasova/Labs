#include <Math.h>
#include "Task2.h"

double sum1(double eps)
{
	double a,a1 = 0;
	double sum = 0;
	int i = 0;

for (;;)
{
	a = (pow(-1.0, i)) * (1.0 - ((pow(2.0, i)) / ((pow(2.0, i)) + 1.0)));
	a1 = fabs(a); 

	sum = sum + a;
	i++;

	if (a1 <= eps)
		break;	
}
return sum;
}