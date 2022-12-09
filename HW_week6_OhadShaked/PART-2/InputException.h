#pragma once
#ifndef INPUT_EXCEPTION_H
#define INPUT_EXCEPTION_H
#include <iostream>
#include <exception>

class InputException : public std::exception
{
public:
	virtual const char* what() const
	{
		return "ERROR: Wrong type of integer\n";
	}
	static void checkInput(int& num);
};

#endif