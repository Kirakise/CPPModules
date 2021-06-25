#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "This Fragy one was created" << std::endl;
    this->Damage = 30;
    this->Hitpoints = 100;
    this->EnergyPoints = 100;
}

FragTrap::~FragTrap()
{
    std::cout << this->name << " was too fragile not to be destroyed.." << std::endl;
}

void FragTrap::highFiveGuys( void ){
    std::cout << this->name << " tries to give high five to anybody... But fails miserably" << std::endl;
}