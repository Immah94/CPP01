#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF =str;

    std::cout << "The memory address of str: " << &str << std::endl;
    std::cout << "The memory address of the pointer value: " << strPTR << std::endl;
    std::cout << "The memory address of the reference value: " << &strREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of str: " << str << std::endl;
    std::cout << "The value of the pointer: " << *strPTR << std::endl;
    std::cout << "The value of the reference: " << strREF << std::endl;

    return 0;
}