#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
    int a = 1;
    int b = 2;

    swap(a,b);
    std::cout << a << " " << b << std::endl;
    std::cout << min(a,b) << " " << max(a,b) << std::endl;

    std::string s1 = "asd";
    std::string s2 = "bsd";
    swap(s1,s2);
    std::cout << s1 << " " << s2 << std::endl;
    std::cout << min(s1,s2) << " " << max(s1,s2) << std::endl;
}