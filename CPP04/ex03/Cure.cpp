#include "Cure.hpp"
#include <iostream>
#include <string>

Cure::Cure() : AMateria("cure")
{};

Cure* Cure::clone() const {
    Cure *tmp = new Cure();
    return tmp;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}