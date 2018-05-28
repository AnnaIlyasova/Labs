#include <stdio.h>

#define ARRAY_NUM 7

//#Task4 function
void writeArray(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if(i == n-1)
			printf("\n\r");
	}
}

//#Task5 function
void readArray(int *arr, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("Enter element num: [%d] from [%d] \r\n", i, n);
		scanf("%d", &arr[i]);
	}
}

//#Task6 function
void sort(int *arr, int n)
{
	int i = 0;
	int j = 0;

	//Вариант 1 - сортировка выбором
	for (i = 0; i < n; i++)
	{
		int jmin = i;

		for (j = i + 1; j < n; j++)
		{
			if (arr[jmin] >arr[j]) jmin = j;
		}
		
		if (jmin != i)
		{
			int tmp = arr[jmin];
			arr[jmin] = arr[i];
			arr[i] = tmp;
		}
	
	//printf("%d ", arr[i]);
	}
	
}

void sortStackArray(int *arr, int n)
{
	printf("%d\r\n", n);
	readArray(arr, n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
}

int main(void)
{
	int arr[ARRAY_NUM] = {0};
	sortStackArray(arr, ARRAY_NUM);
	getchar(); getchar();
	return 0;	
}