#include <math.h>
#include "Task5.h"

double func(double x, double y)
{
	double ret;
	ret = pow(cos(x),4)+pow(sin(y),2)+(pow(sin(2*x),2)/4)-1;
	return ret;
}