#include <Math.h>
#include <stdio.h>
#include "Lab2.h"

int main(void)
{
	int ch;
	double x,y;

	printf("Enter task number:"); ch = getchar();

	switch(ch)
	{
	case 49: //1
		printf("Enter [X] value: "); scanf("%lf", &x);
		printf("Enter [Y] value: "); scanf("%lf", &y);
	
		printf("Return value: [%d]",func_1(x,y) ? 1 : 0);
		break;
	case 50: //2
		printf("Enter [X] value: "); scanf("%lf",&x);
		printf("System value: [%f]",func_2(x));

		break;
	default:
		printf("Wrong value! [%c]", ch);
	}

	getchar();getchar();

	return 0;
}
