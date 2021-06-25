#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap{
    std::string name;
    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void attack( std::string name );
    void whoAmI( void );
    void highFiveGuys( void );
    void guardGate();
};