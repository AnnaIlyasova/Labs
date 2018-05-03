#include <Math.h>
#include "Task1.h"

double sum1(int n)
{
	double a = 0;
	int i = 0;

for (i = 0; i <= (n-1); i++)
{
	a = a + (pow(-1.0, i))* (1.0 - ((pow(2.0, i)) / ((pow(2.0, i)) + 1.0)));
}
return a;
}