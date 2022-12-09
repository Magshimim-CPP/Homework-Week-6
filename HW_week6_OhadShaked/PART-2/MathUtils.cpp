#include "MathUtils.h"
#include <cmath>

#define PI 3.14
double MathUtils::CalHexagonArea(const double ribLen)
{
	double result = (3 * sqrt(3) * 0.5 * pow(ribLen, 2));
	return result;
}

double  MathUtils::CalPentagonArea(const double ribLen)
{
	double result = (5 * pow(ribLen, 2) * tan(3 * PI / 10) * 0.25);
	return result;
}