#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector <int> d(10);
    for (int i = 0; i < 10; i++)
        d[i] = i;
    std::cout << *easyfind(d, 7) << std::endl;
    if (easyfind(d, 12) == d.end())
        std::cout << "No 12 in vector" << std::endl;
}