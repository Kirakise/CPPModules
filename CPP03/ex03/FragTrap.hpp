#pragma once
#include "ClapTrap.hpp"
#include <string>
class FragTrap : public virtual ClapTrap
{
    public:
    FragTrap(std::string name);
    ~FragTrap();
    void highFiveGuys( void );
};