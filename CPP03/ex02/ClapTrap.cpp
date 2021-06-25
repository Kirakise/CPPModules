#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : name(name), Hitpoints(10), EnergyPoints(10), Damage(0)
{
    std::cout << "Aaaaaand CREATE!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Aaaaaand....Destroy?...WHY?!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP " << this->name << " restores " << amount << " HP" << std::endl;
    this->Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "FR4G-TP "<< this->name << " takes " << amount << " of damage!" << std::endl;
    this->Hitpoints += amount;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name << " attacks " << target <<
    ", causing " <<  this->Damage << " points of damage!" << std::endl;
    this->EnergyPoints -= 1;
}