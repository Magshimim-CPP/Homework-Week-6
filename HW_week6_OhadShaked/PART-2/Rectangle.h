#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "Quadrilateral.h"
#include <iostream>

class rectangle : public Quadrilateral {
public:
	void draw();
	double CalArea(double, double);
	bool isSquare(int, int);
	//bool getisSquare();
	rectangle(std::string, std::string, int, int);


private:


};
#endif