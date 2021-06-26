#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
    public:
    Ice();
    Ice* clone() const;
    void use(ICharacter& target);
};