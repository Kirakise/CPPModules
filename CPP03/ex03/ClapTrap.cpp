#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Aaaaaand CREATE!" << std::endl;
    this->name = "UnknownClapTrap";
    this->Hitpoints = 10;
    this->EnergyPoints = 10;
    this->Damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Aaaaaand CREATE!" << std::endl;
    this->name = name;
    this->Hitpoints = 10;
    this->EnergyPoints = 10;
    this->Damage = 0;
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
}