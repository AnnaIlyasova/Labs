#include <Math.h>
#include <Stdio.h>
#include "Task6.h"

double sum3(int n, int k)
{
	double a = 0;
	int i,k1 = 0;

	k1 = k - 1;

for (i = 0; i <= n; i++)
{
	a = (pow(-1.0, i))* (1.0 - ((pow(2.0, i)) / ((pow(2.0, i)) + 1.0)));

	if (i == k1)
	{
		k1 = k1 + k;
		continue;
	}
	printf("%lf\n",a);
}
return 0;
}