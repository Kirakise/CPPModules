#include "Character.hpp"
#include <string>
#include <iostream>


Character::Character(std::string name) : name(name)
{
    this->inv[0] = 0;
    this->inv[1] = 0;
    this->inv[2] = 0;
    this->inv[3] = 0;
}

Character::Character(Character const &ch) : name(ch.getName())
{
    for (int i = 0; i < 4; i++)
    {
        this->inv[i] = ch.inv[0]->clone();
    }
}
Character::~Character(){
    for (int i = 0; i < 4; i++)
        if (this->inv[i] != 0)
            delete this->inv[i];
};

void Character::operator=(Character const &ch)
{
    this->name = ch.getName();
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (this->inv[i] == 0)
        {
            this->inv[i] = m;
            break;
        }
}
void Character::unequip(int idx)
{
    this->inv[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    this->inv[idx]->use(target);
}