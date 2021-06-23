#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p_str = &str;
    std::string &ref_str = str;
    std::cout << "Pointer : " << *p_str << std::endl;
    std::cout << "Reference : " << ref_str << std::endl;
}