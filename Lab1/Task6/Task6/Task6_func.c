#include <math.h>

double x,y,ret;
void func(void)
{
	ret = pow(cos(x),4)+pow(sin(y),2)+(pow(sin(2*x),2)/4)-1;
}
