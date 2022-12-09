
#include "Parallelogram.h"
#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>


Parallelogram::Parallelogram(std::string col, std::string nam, int h, int w, double ang, double ang2):Quadrilateral(col, nam, h, w) {
	 setAngle(ang, ang2);
}
void Parallelogram::draw()
{
	std::cout <<getName()<< std::endl << getColor() << std::endl << "Height is " << getHeight() << std::endl<< "Width is " << getWidth() << std::endl
		<< "Angles are: " << getAngle()<<","<<getAngle2()<< std::endl <<"Area is "<<CalArea(getWidth(),getHeight())<< std::endl;
}

double Parallelogram::CalArea(double w, double h) {
	if (w < 0 || h < 0)
	{
		throw ShapeException();
	}
	return w*h;
}
void Parallelogram::setAngle(double ang, double ang2) {
	angle = ang;
	angle2 = ang2;
}
double Parallelogram::getAngle() {
	return angle;
}
double Parallelogram::getAngle2() {
		return angle2;
	}
