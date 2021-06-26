#pragma once
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
    AMateria *inv[4];
    std::string name;
    public:
    Character(std::string name);
    Character(Character const &);
    ~Character();
    void operator=(Character const &);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};