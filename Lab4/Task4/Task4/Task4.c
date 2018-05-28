#include <stdio.h>
#include <math.h>

void writeArray(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("Element #%d: \n", arr[i]); 
		
	}
}

int main(void)
{
	int n;

	int arr[5] = {3,3,5,8,7};
	writeArray(arr, 5);

	getchar();getchar();
	return 0;
}

