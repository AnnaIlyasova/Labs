#include <stdio.h>
#include <math.h>

void inc1(int *n)
{
	if(!*n)
		return;

	printf("Value: [%d] - Address: [0x%x]\n", *n, n);
	*n=*n+1;
	printf("Value: [%d] - Address: [0x%x]\n", *n, n);
}

void inc2(void)
{
	int n = 0;
	
	printf("Address: [%p] - Value: [%d]\n", &n, n);
	scanf("%d", &n);
	inc1(&n);
	printf("Address: [%p] - Value: [%d]\n", &n, n);
}

int main(void)
{
	int n = 10;

	inc2();

	getchar();getchar();
	return 0;
}

