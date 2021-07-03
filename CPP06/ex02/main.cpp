#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <random>

Base *generate(void)
{
    int a = rand() % 3;
    if (!a)
        return new A;
    else if (a == 1)
        return (new B);
    else if (a == 2)
        return (new C);
    else
        return (0);
}

void identify(Base *ptr)
{
    if (dynamic_cast<A*>(ptr))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(ptr))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(ptr))
        std::cout << "C" << std::endl;
}

void identify(Base &ptr)
{
    try {
        (void)dynamic_cast<A&>(ptr);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast exp){};
    try {
        (void)dynamic_cast<B&>(ptr);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast exp){};
    try {
        (void)dynamic_cast<C&>(ptr);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast exp){};
}


int main()
{
    std::srand(std::time(NULL));
    Base *ptr = generate();
    identify(ptr);
    identify(&*ptr);
}