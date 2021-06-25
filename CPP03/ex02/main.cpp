#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap c("0B00100011110011");
    FragTrap f("MeaninglessRobot");
    ScavTrap s("Serena");

    c.takeDamage(10);
    c.beRepaired(10);
    c.attack("The inspector");
    s.beRepaired(10);
    s.takeDamage(10);
    s.attack("ClapTrap");
    s.guardGate();
    f.beRepaired(10);
    f.takeDamage(10);
    f.attack("ClapTrap");
    f.highFiveGuys();
}