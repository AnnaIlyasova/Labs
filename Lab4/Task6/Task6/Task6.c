#include<stdio.h>
#include<math.h>

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
	printf("%d", arr[i]);
	}
}

int main (void)
{
	int  arr[5] = {5,9,3,2,1};
	sort(arr, 5);
	getchar();
	return 0;
}