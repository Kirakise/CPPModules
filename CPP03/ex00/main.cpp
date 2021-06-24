#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("0B00100011110011");

    c.takeDamage(10);
    c.beRepaired(10);
    c.attack("The inspector");
}