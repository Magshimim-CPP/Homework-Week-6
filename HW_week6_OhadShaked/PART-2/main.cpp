#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "ShapeException.h"
#include "InputException.h"
#include "Hexagon.h"
#include "Pentagon.h"
#include "MathUtils.h"
#include <string>
#include <iostream>

#define ERROR_CHAR ' '
#define MORE_THEN_1_CHAR_ERROR "\nWarning - Don't try to build more than one shape at once\n"

void cleanCin(char ch);

int main()
{
	std::string nam, col; double rad = 0, ang = 0, ang2 = 180; int height = 0, width = 0, ribLen = 0;
	Circle circ(col, nam, rad);
	Quadrilateral quad(nam, col, width, height);
	rectangle rec(nam, col, width, height);
	Parallelogram para(nam, col, width, height, ang, ang2);
	Pentagon pen(nam, col, ribLen);
	Hexagon hex(nam, col, ribLen);

	Shape *ptrcirc = &circ;
	Shape *ptrquad = &quad;
	Shape *ptrrec = &rec;
	Shape *ptrpara = &para;
	Shape* ptrpen = &pen;
	Shape* ptrhex = &hex;


	
	std::cout << "Enter information for your objects" << std::endl;
	const char circle = 'c', quadrilateral = 'q', rectangle = 'r', parallelogram = 'p'; char shapetype;
	char x = 'y';
	while (x != 'x') {
		std::cout << "which shape would you like to work with?.. \nc = circle, q = quadrilateral, r = rectangle, p = parallelogram, e = pentagon, h = hexagon" << std::endl;
		std::cin >> shapetype;
		cleanCin(shapetype);
try
		{

			switch (shapetype) {
			case 'c':
				std::cout << "enter color, name,  rad for circle" << std::endl;
				std::cin >> col >> nam >> rad;
				InputException::checkInput();
				circ.setColor(col);
				circ.setName(nam);
				circ.setRad(rad);
				ptrcirc->draw();
				break;
			case 'q':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col >> height >> width;
				InputException::checkInput();
				quad.setName(nam);
				quad.setColor(col);
				quad.setHeight(height);
				quad.setWidth(width);
				ptrquad->draw();
				break;
			case 'r':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col >> height >> width;
				InputException::checkInput();
				rec.setName(nam);
				rec.setColor(col);
				rec.setHeight(height);
				rec.setWidth(width);
				ptrrec->draw();
				break;
			case 'p':
				std::cout << "enter name, color, height, width, 2 angles" << std::endl;
				std::cin >> nam >> col >> height >> width >> ang >> ang2;
				InputException::checkInput();
				para.setName(nam);
				para.setColor(col);
				para.setHeight(height);
				para.setWidth(width);
				para.setAngle(ang, ang2);
				ptrpara->draw();
				break;
			case 'e': //ADDED PENTAGON
				std::cout << "enter name, color, and rib length" << std::endl;
				std::cin >> nam >> col >> ribLen;
				InputException::checkInput();
				pen.setName(nam);
				pen.setColor(col);
				pen.setRibLength(ribLen);
				ptrpen->draw();
				break;
			case 'h': //ADDED HEXAGON
				std::cout << "enter name, color, and rib length" << std::endl;
				std::cin >> nam >> col >> ribLen;
				InputException::checkInput();
				hex.setName(nam);
				hex.setColor(col);
				hex.setRibLength(ribLen);
				ptrhex->draw();
				break;

			default:
				std::cout << "you have entered an invalid letter, please re-enter" << std::endl;
				break;
			}
			std::cout << "would you like to add more object press any key if not press x" << std::endl;
			std::cin >> x;
			cleanCin(shapetype);
		}
		catch (std::exception& e) //catching the exception by reference.
		{
			printf(e.what());
		}
		catch (...)
		{
			printf("caught a bad exception. continuing as usual\n");
		}
	}

		system("pause");
		return 0;
	
}

/*
Static function to check input errors (cin fail), in case user enterd a char to int etc..
Input: none
Output: none
*/
void InputException::checkInput()
{
	if (std::cin.fail()) //checking if there is a cin fail (input error)
	{
		std::cin.clear(); //clearing the input buffer
		std::cin.ignore(CHAR_MAX, '\n'); //ignoring cin input until '\n' (new line).
		throw InputException(); //throwing input exception.
	}
}

/*
Function to check input errors (multiple letters for a char etc..)
Input: char ch
Output: none
*/
void cleanCin(char ch)
{
	if ((std::cin).get() != '\n') //checking if there is more input then one letter in the cin stream.
	{
		ch = ERROR_CHAR; //setting the selection to ERROR_CHAR.
		std::cin.clear(); //clearing the input buffer
		std::cin.ignore(CHAR_MAX, '\n'); //ignoring cin input until '\n' (new line).
		std::cout << MORE_THEN_1_CHAR_ERROR << std::endl; //printing error message.
	}
}
