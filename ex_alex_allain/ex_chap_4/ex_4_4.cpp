#include <iostream>
#include <string>

int main()
{
   std::string username;
   std::string password;

   std::cout << "please insert your username: ";
   getline(std::cin, username, '\n');
   std::cout << "please insert the password: ";
   getline(std::cin, password, '\n');

   if (username == "user_1" && password == "password_1")
   {
    std::cout << "access granted" << std::endl;
   }
   
   else if (username == "user_2" && password == "password_2")
   {
    std::cout << "access granted" << std::endl;
   }

   else if ( username == "user_2" && password == "password_2")
   {
    std::cout << "access granted" << std::endl;
   }
   else 
   {
    std::cout << "access denied" << std::endl;
   }





    

}
