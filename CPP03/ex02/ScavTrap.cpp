#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    std::cout << "This pretty one was created" << std::endl;
    this->name = "ScavTrap";
    this->Damage = 20;
    this->Hitpoints = 100;
    this->EnergyPoints = 50;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "This pretty one was created" << std::endl;
    this->name = name;
    this->Damage = 20;
    this->Hitpoints = 100;
    this->EnergyPoints = 50;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Why would this pretty one be detroyed, hm ?!" << std::endl;
}

void ScavTrap::attack(std::string name)
{
    std::cout << "This pretty " << this->name << " attacks " << name << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "I'm now in Guardian mode!!..... Wtf is that?" << std::endl;
}