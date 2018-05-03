#include <Math.h>
#include <Stdio.h>
#include "Task5.h"

int main(void)
{
	double eps = 0;
	double a = 0;

	printf("Enter [eps] value: ");
	scanf("%lf", &eps);

	printf("%d", sum1(eps));

	getchar(); getchar();

	return 0;
}