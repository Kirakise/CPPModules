#pragma once
#include "ClapTrap.hpp"
#include <string>
class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    void highFiveGuys( void );
};