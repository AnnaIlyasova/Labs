#include "complex.h"
//mod = sqrt(pow(re,2) + pow(im,2))
//arg = atan(im/re)

Complex::Complex()
	//:Complex(0, 0)
{
}

Complex::Complex(double x)
	//:Complex(sqrt(pow(x, 2)), atan(0.))
{
}

Complex::Complex(double r, double phi)
	: module(r), argument(phi)
{
}

double Complex::Re() const
{
	return (!R() && !Phi()) ? 0 : cos(argument) * module;
}

double Complex::Im() const
{
	return (!R() && !Phi()) ? 0 : sin(argument) * module;
}

double Complex::R() const
{
	return module;
}

double Complex::Phi() const
{
	return argument;
}

Complex operator+(const Complex&left, const Complex&right)
{
	double newre = left.Re() + right.Re();
	double newim = left.Im() + right.Im();
	return Complex(sqrt(pow(newre, 2) + pow(newim, 2)), atan(newim / newre));
}

Complex operator-(const Complex&left, const Complex&right)
{
	double newre = left.Re() - right.Re();
	double newim = left.Im() - right.Im();
	return Complex(sqrt(pow(newre, 2) + pow(newim, 2)), atan(newim / newre));
}

Complex operator*(const Complex&left, const Complex&right)
{
	double newre = left.Re() * right.Re() - left.Im() * right.Im();
	double newim = left.Re() * right.Re() + left.Im() * right.Im();
	return Complex(sqrt(pow(newre, 2) + pow(newim, 2)), atan(newim / newre));
}

Complex operator/(const Complex&left, const Complex&right)
{
	double newre = (left.Re() * right.Re() + left.Im() * right.Im()) / (pow(right.Re(), 2) + pow(right.Im(), 2));
	double newim = (right.Re() * left.Im() - left.Re() * right.Im()) / (pow(right.Re(), 2) + pow(right.Im(), 2));
	return Complex(sqrt(pow(newre, 2) + pow(newim, 2)), atan(newim / newre));
}

ostream& operator<<(ostream&stream, const Complex&data)
{
	stream<<data.Re() << ((data.Im()>0)?"+":"")<<data.Im() <<"i";
	return stream;
}