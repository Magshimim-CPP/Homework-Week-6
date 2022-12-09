#pragma once
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <string>
#include <iostream>

class MathUtils
{
public:
	static double CalPentagonArea(const double ribLen); //Function to calculate a pentagon's area using a rib's length
	static double CalHexagonArea(const double ribLen); //Function to calculate a hexagon's area using a rib's length
};

#endif