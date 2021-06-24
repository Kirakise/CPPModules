#pragma once
#include <string>

class ClapTrap{
    public:
    std::string name;
    int Hitpoints;
    int EnergyPoints;
    int Damage;
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};