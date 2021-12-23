#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The address in memory of the string by using: "<<std::endl;
    std::cout << "1. The string is: "<< &str << std::endl;
    std::cout << "2. The pointer is: "<< stringPTR << std::endl;
    std::cout << "3. The reference is: "<< &stringREF << std::endl;
    std::cout << "The string by using: "<<std::endl;
    std::cout << "1. The pointer is: "<< *stringPTR << std::endl;
    std::cout << "2. The reference is: "<< stringREF << std::endl;
}