#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "None";
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::setType(std::string s)
{
    this->type = s;
}

std::string Weapon::getType()
{
    return this->type;
}