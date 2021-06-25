#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
int main()
{
    ClapTrap c("0B00100011110011");
    FragTrap f("MeaninglessRobot");
    ScavTrap s("Serena");
    DiamondTrap d("Josuke");

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


    d.beRepaired(10);
    d.takeDamage(10);
    d.attack("DIO DA");
    d.highFiveGuys();
    d.guardGate();
    d.whoAmI();
}