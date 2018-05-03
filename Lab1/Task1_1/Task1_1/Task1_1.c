#include <stdio.h>
#include <math.h>

int main(void)
{
	double x = 0;
	double y = 0;
	double ret = 0;

	printf("Enter X value: ");
	scanf("%lf",&x);
	printf("Enter Y value: ");
	scanf("%lf",&y);

	ret = pow(cos(x),4)+pow(sin(y),2)+(pow(sin(2*x),2)/4)-1;

	printf("%10.4f",ret);
	getchar();getchar();
	return 0;
}