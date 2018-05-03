#include <Math.h>
#include <Stdio.h>
#include "Task3_1.h"

double sum1(int n, int k)
{
	double a = 0;
	int i = 0;
	int k1 = 0;

	k1 = k - 1;

while (i <= n)
{
	a = (pow(-1.0, i))* (1.0 - ((pow(2.0, i)) / ((pow(2.0, i)) + 1.0)));

	if (i == k1)
	{
		i++;
		k1 = k1 + k;
		continue;
	}
	i++;
	printf("%lf\n",a);
}
return 0;
}