#include <iostream>

/* You can include here the line "using namespace std;" 
so that you do not need to use the prefix "std::" before 
standard library names like cin and cout */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0; 
}

// the main function is a function
// every function need to return a value
// the main function is the only exception where returning 0 means that the program ended successfully
// if you do not return 0 manually, the compiler will add it for you
// meaning that the line "return 0"; is optional in the main function