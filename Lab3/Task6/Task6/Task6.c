#include <Math.h>
#include <stdio.h>
#include <stdlib.h> 
#include "Task6.h"

int main(void)
{
	int ch = 0;
	int n = 0;
	int k = 0;
	int s = 0;
	double eps = 0;
	double a = 0;
	double sum = 0;

for(;;)
{
	system("cls");
	printf("Enter task number:"); ch = getchar();
	//system("cls");

	switch(ch)
	{
	case 49: //1

		system("cls");

		printf("Enter [n] value: ");
		scanf("%d", &n);

	printf("[a] value: %5.5f", sum1(n));

	getchar(); getchar();


		break;
	case 50: //2

		system("cls");

		printf("Enter [eps] value: ");
	scanf("%lf", &eps);

	printf("[sum] value: %lf", sum2(eps));

	getchar(); getchar();


		break;
	case 51: //3

		system("cls");

		printf("Enter [n] value: ");
	scanf("%d", &n);
	printf("Enter [k] value: ");
	scanf("%d", &k);

	printf("",sum3(n,k));

	getchar(); getchar();

		
		break;
	case 52: //4

		system("cls");

		printf("Enter [eps] value: ");
	scanf("%lf", &eps);

	printf("%d", sum4(eps));

	getchar(); getchar();
		

		break;
	case 53: //5

		system("cls");

		printf("Enter [eps] value: ");
	scanf("%lf", &eps);

	printf("%d", sum5(eps));

	getchar(); getchar();
		
		break;

	case 54: //6
		return 0;
		break;
	}

}

getchar();getchar();

	return 0;
}
