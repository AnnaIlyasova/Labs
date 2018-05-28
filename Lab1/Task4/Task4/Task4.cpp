#include <stdio.h>
#include <math.h>
#include "Task4.h"

double x = 0;
double y = 0;
double ret;

int main(void)
{

	printf("Enter X value: ");
	scanf("%lf",&x);
	printf("Enter Y value: ");
	scanf("%lf",&y);
	func();
	printf("%10.4f",ret);
	
	getchar(); getchar(); 
	return 0;

	getchar(); getchar();
	return 0;
}

void func(void)
{
	ret = pow(cos(x),4)+pow(sin(y),2)+(pow(sin(2*x),2)/4)-1;
}