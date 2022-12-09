#include <iostream>

#define NOT_ALLOWED 8200
#define ERROR_NUM -1
#define ERROR_MESSAGE "\nThis user is not authorized to access 8200\nplease enter different numbers, or try to get clearance in 1 year.\n"


int add(int a, int b, bool& isError)
{
    if (a + b == NOT_ALLOWED || a == NOT_ALLOWED || b == NOT_ALLOWED)
    {
        isError = true;
        return ERROR_NUM;
    }

    return a + b;
}

int multiply(int a, int b, bool& isError)
{
    if (a == NOT_ALLOWED || b == NOT_ALLOWED)
    {
        isError = true;
        return ERROR_NUM;
    }

    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum = add(sum, a, isError);
        if (isError)
        {
            return ERROR_NUM;
        } 
    };
    return sum;
}

int pow(int a, int b, bool& isError)
{
    if (a == NOT_ALLOWED || b == NOT_ALLOWED)
    {
        isError = true;
        return ERROR_NUM;
    }
    int exponent = 1;
    for (int i = 0; i < b; i++)
    {
        exponent = multiply(exponent, a, isError);
        if (isError)
        {
            return ERROR_NUM;
        }
    };
    return exponent;
}

int main(void)
{
    bool errorCheck = false;
    int result = 0;

    result = pow(3, 7, errorCheck); //OK

    if (errorCheck)
    {
        std::cout << ERROR_MESSAGE << std::endl;
    }
    else
    {
        std::cout << result << std::endl;
    }

    result = multiply(4100, 2, errorCheck); //NOT ALLOWED

    if (errorCheck)
    {
        std::cout << ERROR_MESSAGE << std::endl;
    }
    else
    {
        std::cout << result << std::endl;
    }

    result = add(8200, 2, errorCheck); //NOT ALLOWED

    if (errorCheck)
    {
        std::cout << ERROR_MESSAGE << std::endl;
    }
    else
    {
        std::cout << result << std::endl;
    }

}