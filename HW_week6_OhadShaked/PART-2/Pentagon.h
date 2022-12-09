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
	void draw();
	void setLength(double ribLen);
	virtual double CalArea() const;
	virtual double CalPeramiter() const;
	Pentagon(std::string name, std::string color, double ribLen);

};
#endif