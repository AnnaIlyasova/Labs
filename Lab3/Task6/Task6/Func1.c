#include <Math.h>
#include "Task6.h"

double sum1(int n)
{
	double s = 0;
	int i = 0;

for (i = 0; i <= (n-1); i++)
{
	s = s + (pow(-1.0, i))* (1.0 - ((pow(2.0, i)) / ((pow(2.0, i)) + 1.0)));
}
return s;
}