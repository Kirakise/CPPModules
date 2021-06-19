#include "Human.hpp"
#include <iostream>
#include <string>

int main()
{
    Human bob;

    std::cout << bob.indetify() << std::endl;
    std::cout << bob.GetBrain()->indetify() << std::endl;
}