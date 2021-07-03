#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> a(10);
    Array<int> b(a);
    Array<int> c;

    c = b;
    a[1] = 12;
    a[1] = 14;
    std::cout << a[0] << " " << a.getSize() << " " << a[1] << " " << b[1] << " " << c[1] << " " << c.getSize() << std::endl;
    try{
        std::cout << a[12];
    }
    catch (std::exception &e)
    {
        std::cerr << e.what();
    }
}