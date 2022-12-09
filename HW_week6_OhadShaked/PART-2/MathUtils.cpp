#include "MathUtils.h"
#include <cmath>

#define PI 	3.14159265358979323846 //defined PI value

/*
Function to calculate a pentagon's area using a rib's length
Input: const double ribLen
Output: the pentagon's area (double result)
*/
double  MathUtils::CalPentagonArea(const double ribLen)
{
	double result = (5 * pow(ribLen, 2) * tan(3*PI/10) * 0.25);
	return result;
}

/*
Function to calculate a hexagon's area using a rib's length
Input: const double ribLen
Output: the hexagon's area (double result)
*/
double MathUtils::CalHexagonArea(const double ribLen)
{
	double result = (3 * sqrt(3) * 0.5 * pow(ribLen, 2));
	return result;
}