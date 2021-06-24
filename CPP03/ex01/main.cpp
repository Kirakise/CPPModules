#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap c("0B00100011110011");
    ScavTrap s("Serena");

    c.takeDamage(10);
    c.beRepaired(10);
    c.attack("The inspector");
    s.beRepaired(10);
    s.takeDamage(10);
    s.attack("ClapTrap");
    s.guardGate();
}