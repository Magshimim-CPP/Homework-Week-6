#include "Hexagon.h"
#include "shapeexception.h"

Hexagon::Hexagon(std::string name, std::string color, double ribLen) : Shape(color, name)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

void Hexagon::draw()
{
	std::cout << std::endl << "Color is: " << getColor() << std::endl << "Name is: " << getName() << std::endl << "Rib length is: " << _ribLen << std::endl << "Area is: " << CalArea() << std::endl << "Peramiter is: " << CalPeramiter() << std::endl;
}

void Hexagon::setRibLength(double ribLen)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

double Hexagon::CalArea() const
{
	return MathUtils::CalHexagonArea(_ribLen);
}

double Hexagon::CalPeramiter() const
{
	return 6 * _ribLen;
}
