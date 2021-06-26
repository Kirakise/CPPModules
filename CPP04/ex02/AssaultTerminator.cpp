#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator *AssaultTerminator::clone() const{
    AssaultTerminator *t = new AssaultTerminator();
    return t;
}

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout <<  "* attacks with chainfists *" << std::endl;
}
