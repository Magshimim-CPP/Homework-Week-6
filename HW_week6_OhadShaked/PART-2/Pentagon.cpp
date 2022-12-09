#include "Pentagon.h"
#include "ShapeException.h"

/*
Constructor function for a pentagon object
Input: std::string name, std::string color, double ribLen
Output: none
*/
Pentagon::Pentagon(std::string name, std::string color, double ribLen) : Shape(color, name)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

/*
Function to print the pentagon's details
Input: none
Output: none
*/
void Pentagon::draw()
{
	std::cout << std::endl << "Color is: " << getColor() << std::endl << "Name is: " << getName() << std::endl << "Rib length is: " << _ribLen << std::endl << "Area is: " << CalArea() << std::endl << "Peramiter is: " << CalPeramiter() << std::endl;
}

/*
Function to let the user re-set the rib's length
Input: double ribLen
Output: none
*/
void Pentagon::setRibLength(double ribLen)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

/*
Function returns the pentagon's area (using MathUtils::CalPentagonArea())
Input: none
Output: the pentagon's area
*/
double Pentagon::CalArea() const
{
	return MathUtils::CalPentagonArea(_ribLen);
}

/*
Function returns the pentagon's peramiter
Input: none
Output: the pentagon's peramiter
*/
double Pentagon::CalPeramiter() const
{
	return 5 * _ribLen;
}
