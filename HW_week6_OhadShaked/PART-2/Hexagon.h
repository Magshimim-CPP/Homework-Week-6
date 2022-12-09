#pragma once
#ifndef HEXAGON_H
#define HEXAGON_H

#include "Shape.h"
#include "MathUtils.h"
#include <iostream>

class Hexagon : public Shape
{
private:
	double _ribLen;

public:
	void draw(); //Function to print the hexagon's details
	void setRibLength(double ribLen); //Function to let the user re-set the rib's length
	virtual double CalArea() const; //Function returns the hexagon's area (using MathUtils::CalHexagonArea())
	virtual double CalPeramiter() const; //Function returns the hexagon's peramiter
	Hexagon(std::string name, std::string color, double ribLen); //Constructor function for a hexagon object
	
};
#endif