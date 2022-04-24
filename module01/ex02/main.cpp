#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "address of string: " << &string << std::endl;
    std::cout << "address of stringPTR: " << &(*stringPTR) << std::endl;
    std::cout << "address of stringREF: " << &stringREF << std::endl;

    std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

}