#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    std::cout << "I, " << DiamondTrap::name << " have a dream..." << std::endl;
    this->EnergyPoints = 50;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "Dying? Nah, it's GOLDEN WIND time!" << std::endl;
}

void DiamondTrap::attack( std::string name ){
    FragTrap::attack(name);
}

void DiamondTrap::whoAmI( void )
{
    std::cout << "My name is " << DiamondTrap::name << " and my father's....or mother's... whatever, it's name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::guardGate( void )
{
    ScavTrap::guardGate();
}

void DiamondTrap::highFiveGuys( void )
{
    FragTrap::highFiveGuys();
}