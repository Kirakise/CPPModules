#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{}

Ice* Ice::clone() const {
    Ice *tmp = new Ice();
    return tmp;
}

void Ice::use(ICharacter& target) {
    this->_xp += 10;
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
