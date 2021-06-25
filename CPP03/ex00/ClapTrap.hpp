#pragma once
#include <string>

class ClapTrap{
    std::string name;
    int Hitpoints;
    int EnergyPoints;
    int Damage;
    public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};