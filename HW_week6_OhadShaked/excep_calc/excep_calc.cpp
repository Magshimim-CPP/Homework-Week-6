#include <iostream>
#include <exception>

#define NOT_ALLOWED 8200
#define ERROR_MESSAGE "\nThis user is not authorized to access 8200\nplease enter different numbers, or try to get clearance in 1 year.\n"

class MyException : public std::exception
{
public:
    virtual const char* what() const;
};

const char* MyException::what() const
{
    return ERROR_MESSAGE;
}


int add(int a, int b)
{
    if (a + b == NOT_ALLOWED || a == NOT_ALLOWED || b == NOT_ALLOWED)
    {
        throw MyException();
    }
    return a + b;
}

int multiply(int a, int b)
{
    if (a == NOT_ALLOWED || b == NOT_ALLOWED)
    {
        throw MyException();
    }

    int sum = 0;

    for(int i = 0; i < b; i++)
    {
        sum = add(sum, a);
    };
    return sum;
}

int pow(int a, int b)
{
    if (a == NOT_ALLOWED || b == NOT_ALLOWED)
    {
        throw MyException();
    }

    int exponent = 1;
    for(int i = 0; i < b; i++)
    {
        exponent = multiply(exponent, a);
    };
    return exponent;
}

int main(void)
{
    try
    {
        std::cout << pow(3, 7) << std::endl; //OK;
    }
    catch (const MyException& error)
    {
        std::cout << error.what() << std::endl;
    }
    try
    {
        std::cout << multiply(4100, 2) << std::endl; //NOT ALLOWED
    }
    catch (const MyException& error)
    {
        std::cout << error.what() << std::endl;
    }
    try
    {
        std::cout << add(8200, 2) << std::endl; //NOT ALLOWED
    }
    catch (const MyException& error)
    {
        std::cout << error.what() << std::endl;
    }
}
