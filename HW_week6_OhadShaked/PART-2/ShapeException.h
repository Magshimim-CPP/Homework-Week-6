#pragma once
#ifndef SHAPE_EXCEPTION_H
#define SHAPE_EXCEPTION_H
#include <exception>


class ShapeException : public std::exception
{
public:
	virtual const char* what() const
	{
		return "This is a shape exception!\n";
	}
};




#endif