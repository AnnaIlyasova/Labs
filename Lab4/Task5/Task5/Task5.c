#include <stdio.h>
#include <math.h>

void readArray(int *arr, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("Enter element num:#%d \r\n", i);
		scanf("%d", &arr[i]);
	}
}

int main(void)
{
	int arr[5];
	readArray(arr, 5);
	return 0;
}

