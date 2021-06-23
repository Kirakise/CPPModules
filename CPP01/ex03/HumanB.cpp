#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = new Weapon("None");
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}