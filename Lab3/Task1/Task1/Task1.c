#include <Math.h>
#include <Stdio.h>
#include "Task1.h"

int main(void)
{
	int n = 0;
	int a = 0;

	printf("Enter [n] value: ");
	scanf("%d", &n);

	printf("[a] value: %5.5f", sum1(n));

	getchar(); getchar();

	return 0;
}