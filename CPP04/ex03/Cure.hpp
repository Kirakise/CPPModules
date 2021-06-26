#pragma once
#include "AMateria.hpp"

class Cure : public AMateria{
    public:
    Cure();
    Cure* clone() const;
    void use(ICharacter& target);
};