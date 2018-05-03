#include <Math.h>
#include <Stdio.h>
#include "Task2_1.h"

int main(void)
{
	double eps = 0;
	double a = 0;
	double sum = 0;

	printf("Enter [eps] value: ");
	scanf("%lf", &eps);

	printf("[sum] value: %lf", sum1(eps));

	getchar(); getchar();

	return 0;
}