#include <iostream>
#include <string>

// using namespace std;

int main ()
{
    std::string full_name;
    std::cout << "please type your full name:" << std::endl;
    getline(std::cin, full_name, '\n');

    std::cout << "Hello, " << full_name << ". Please type in two numbers: "<< std::endl;
    double n1;
    double n2;
    std::cin >> n1;
    std::cin >> n2;

    std::cout << "Alright, the sum of the numbers you provided is: " << n1 + n2 << '\n';
    std::cout << "and the first number divided by the second yields: " << n1 / n2 << '\n';

    return 0;
}