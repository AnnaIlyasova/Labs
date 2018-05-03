#include <stdio.h>
#include <math.h>

extern void func(void);
extern double x,y,ret;

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

