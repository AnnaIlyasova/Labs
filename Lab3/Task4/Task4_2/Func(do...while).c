#include <Math.h>
#include <Stdio.h>
#include "Task4_2.h"

int sum1(double eps)
{
double a = 0;
	double a1 = 0;
	int i = 0;

do
{
	a = (pow(-1.0, i))* (1.0 - ((pow(2.0, i)) / ((pow(2.0, i)) + 1.0)));
	a1 = fabs(a);

	if (a1 <= eps)
		break;
	i++;
}
while (i >= 0);
return i;
}