#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

//quadrilateral::quadrilateral() {}
Quadrilateral::Quadrilateral(std::string nam, std::string col, int h, int w):Shape(nam, col) {

	if (h < 0 || w < 0)
	{
		throw ShapeException();
	}
	//void setName(string nam); //PRIVATE DATA
	//void setColor(string col);
	setHeight(h);
	setWidth(w);
	
}
void Quadrilateral::draw()
{
	//quadrilateral p;
	std::cout << getName()<< std::endl << getColor() << std::endl<< "Width is " << getWidth() << std::endl << "Height is " << getHeight() << std::endl <<"Area is "<<CalArea()<< std::endl<<"Perimeter is "<<getCalPerimater()<< std::endl;
	//cout << name << color;
}

double Quadrilateral::CalArea()
{
	if (width < 0 || height < 0)
	{
		throw ShapeException();
	}
	return width*height; //RECTANGLE 
}

void Quadrilateral::setHeight(int h) {
	if (h < 0)
	{
		throw ShapeException();
	}
	height = h;
}
void Quadrilateral::setWidth(int w) {
	if (w < 0)
	{
		throw ShapeException();
	}
	width = w;
}
double Quadrilateral::CalPerimater() {
	if (width < 0 || height < 0)
	{
		throw ShapeException();
	}
	return 2 * (height + width);
}
double Quadrilateral::getCalPerimater() {
	return 2 * (height + width);

}
int Quadrilateral::getHeight() {
	return height;
}
int Quadrilateral::getWidth() {
	return width;
}