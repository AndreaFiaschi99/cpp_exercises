#include <iostream>

int main()
{
    int password_1 = 201299;
    int password_2 = 200499;
    int password_user;
    std::cout << "please type the super secret 6-digit password" << std::endl; 
    std::cin >> password_user;

    if (password_user == password_1 || password_user == password_2)
    {
        std::cout << "access granted! \n";
    }
    else
    {
        std::cout << "access denied, sorry \n";
    }

}