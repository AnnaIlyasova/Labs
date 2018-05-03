#include <math.h>
#include "Lab2.h"

BOOL func_1(double x, double y)
{
	BOOL ret;
	
	double G, sinfi, fi, Kx, Ky;

	if (x > 0 && y < 0)
		ret = FALSE;

	else
	{
		G = sqrt(pow(x,2)+pow(y,2));
		sinfi = y/G;
		fi = asin(sinfi);
		Kx = 1*cos(fi);
		Ky = 1*sin(fi);

		ret = (x > Kx || y > Ky) ? FALSE : TRUE;
	}
	return ret;	
}