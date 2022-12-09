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
	void draw();
	void setRibLength(double ribLen);
	virtual double CalArea() const;
	virtual double CalPeramiter() const;
	Hexagon(std::string name, std::string color, double ribLen);
	
};
#endif