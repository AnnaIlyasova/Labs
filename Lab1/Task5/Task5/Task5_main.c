#include <stdio.h>
#include <math.h>
#include "Task5.h"

double x = 0;
double y = 0;
double ret;

int main(void)
{
	printf("Enter X value: ");
	scanf("%lf",&x);
	printf("Enter Y value: ");
	scanf("%lf",&y);

	printf("%10.4f",func(x,y));
	
	getchar(); getchar(); 
	return 0;
}

