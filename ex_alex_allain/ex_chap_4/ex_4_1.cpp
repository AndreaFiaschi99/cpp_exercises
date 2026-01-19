#include <iostream>

int main()
{

    std::cout << "please insert two numbers that represent two random ages: \n";
    int age1;
    int age2;
    std::cin >> age1;
    std::cin >> age2;    

    if (age1 >= 100 && age2 >= 100)
    {
        std::cout << "these users are ver old! \n";
    }
    else if (age1 > age2) 
    {
        std::cout << "user 1 is older than user 2 \n";
    }
    else if (age1 < age2)
    {
        std::cout << "user 2 is older than user 1 \n";
    }
    else 
    {
        std::cout << "the two users are the same age \n";
    }

}