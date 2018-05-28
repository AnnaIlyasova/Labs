#include <stdio.h>
#include <math.h>

void inc(int *n)
{
	if(!*n)
		return;

	printf("Value: [%d] - Address: [0x%x]\n", *n, n);
	*n=*n+1;
	printf("Value: [%d] - Address: [0x%x]\n", *n, n);
}

int main(void)
{
	int n = 110;

	inc(&n);

	getchar();
	return 0;
}

