#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(std::string name);
    void guardGate();
};