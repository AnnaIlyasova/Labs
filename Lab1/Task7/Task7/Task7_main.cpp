#include <stdio.h>
#include <math.h>
//#include "Task7.h" //Раскоментировать для выполнения пункта 7
#include "Task8.h" //Раскоментировать для выполнения пункта 8

int main(void)
{
	printf("Enter X value: ");
	scanf("%lf",&x);
	printf("Enter Y value: ");
	scanf("%lf",&y);
	func();
	printf("%10.4f",ret);
	
	getchar(); getchar(); 
	return 0;
}

