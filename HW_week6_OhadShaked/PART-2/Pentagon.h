#pragma once
#ifndef PENTAGON_H
#define PENTAGON_H

#include "Shape.h"
#include "MathUtils.h"
#include <iostream>

class Pentagon : public Shape
{
private:
	double _ribLen;

public:
	void draw(); //Function to print the pentagon's details
	void setRibLength(double ribLen); //Function to let the user re-set the rib's length
	virtual double CalArea() const; //Function returns the pentagon's area (using MathUtils::CalPentagonArea())
	virtual double CalPeramiter() const; //Function returns the pentagon's peramiter
	Pentagon(std::string name, std::string color, double ribLen); //Constructor function for a pentagon object

};
#endif