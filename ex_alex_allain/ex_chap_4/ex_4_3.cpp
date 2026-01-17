#include <iostream>

int main()
{
    std::cout << "please write a simple operation between two numbers:" << std::endl;
    int x;
    char operation;
    int y;
    std::cin >> x;
    std::cin >> operation;
    std::cin >> y;
    if ( operation == '+')
    {
        std::cout << "the result is:" << std::endl << x + y << std::endl;
    }
    else if ( operation == '-')
    {
        std::cout << "the result is:" << std::endl << x - y << std::endl;
    }
    else if ( operation == 'x' || operation == '*')
    {
        std::cout << "the result is:" << std::endl << x * y << std::endl;
    }
    else if( operation == '/' || operation == '%')
    {
        std::cout << "the result is:" << std::endl << x / y << std::endl;
    }
    else
    {
        std::cout << "invalid operations or numbers" << std::endl;
    }

}