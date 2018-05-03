#include <Math.h>
#include <Stdio.h>
#include "Task3_2.h"

int main(void)
{
	int n,k = 0;
	double a = 0;

	printf("Enter [n] value: ");
	scanf("%d", &n);
	printf("Enter [k] value: ");
	scanf("%d", &k);

	printf("",sum1(n,k));

	getchar(); getchar();

	return 0;
}