#include "Hexagon.h"
#include "shapeexception.h"

/*
Constructor function for a hexagon object
Input: std::string name, std::string color, double ribLen
Output: none
*/
Hexagon::Hexagon(std::string name, std::string color, double ribLen) : Shape(color, name)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

/*
Function to print the hexagon's details
Input: none
Output: none
*/
void Hexagon::draw()
{
	std::cout << std::endl << "Color is: " << getColor() << std::endl << "Name is: " << getName() << std::endl << "Rib length is: " << _ribLen << std::endl << "Area is: " << CalArea() << std::endl << "Peramiter is: " << CalPeramiter() << std::endl;
}

/*
Function to let the user re-set the rib's length
Input: double ribLen
Output: none
*/
void Hexagon::setRibLength(double ribLen)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

/*
Function returns the hexagon's area (using MathUtils::CalHexagonArea())
Input: none
Output: the hexagon's area
*/
double Hexagon::CalArea() const
{
	return MathUtils::CalHexagonArea(_ribLen);
}

/*
Function returns the hexagon's peramiter
Input: none
Output: the hexagon's peramiter
*/
double Hexagon::CalPeramiter() const
{
	return 6 * _ribLen;
}
