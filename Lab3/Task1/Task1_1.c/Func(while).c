#include <Math.h>
#include "Task1_1.h"

double sum1(int n)
{
	double a = 0;
	int i = 0;

while (i <= (n-1))
{
	a = a + (pow(-1.0, i) * (1.0 - (pow(2.0, i) / (pow(2.0, i) + 1.0))));
	i++;
}

return a;
}