#include "Pentagon.h"
#include "ShapeException.h"

Pentagon::Pentagon(std::string name, std::string color, double ribLen) : Shape(color, name)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}
void Pentagon::draw()
{
	std::cout << std::endl << "Color is: " << getColor() << std::endl << "Name is: " << getName() << std::endl << "Rib length is: " << _ribLen << std::endl << "Area is: " << CalArea() << std::endl << "Peramiter is: " << CalPeramiter() << std::endl;
}

void Pentagon::setLength(double ribLen)
{
	if (ribLen < 0)
	{
		throw ShapeException();
	}
	_ribLen = ribLen;
}

double Pentagon::CalArea() const
{
	return MathUtils::CalPentagonArea(_ribLen);
}

double Pentagon::CalPeramiter() const
{
	return 5 * _ribLen;
}
