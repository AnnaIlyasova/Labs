#include <stdio.h>
#include <math.h>

int main(void)
{
	const double x = 0.5;
	const double y = 0.7;
	double ret = 0;
	printf("Hello!\n");

	ret = pow(cos(x),4)+pow(sin(y),2)+(pow(sin(2*x),2)/4)-1;

	printf("%10.4f",ret);
	getchar();
	return 0;
}