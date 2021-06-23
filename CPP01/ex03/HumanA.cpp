#include "HumanA.hpp"
#include <iostream>
HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name)
{
    this->name = name;
    this->weapon = new Weapon("None");
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}