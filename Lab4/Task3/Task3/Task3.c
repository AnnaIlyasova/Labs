#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void inc1(int *n)
{
	if(!*n)
		return;

	printf("Value: [%d] - Address: [0x%x]\n", *n, n);
	*n=*n+1;
	printf("Value: [%d] - Address: [0x%x]\n", *n, n);
}

void inc3(void)
{
	int *n = (int *) malloc(sizeof(int));
	
	printf("Value: [%d] - Address: [0x%X]\n", *n, n);
	scanf("%d", n);
	inc1(n);
	printf("Value: [%d] - Address: [0x%X]\n", *n, n);
	free(n);
}

int main(void)
{
	int n = 10;
	inc3();

	getchar();getchar();
	return 0;
}

