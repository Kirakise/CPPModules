#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
int main()
{
    ClapTrap c("0B00100011110011");
    std::cout << std::endl;
    FragTrap f("MeaninglessRobot");
    std::cout << std::endl;
    ScavTrap s("Serena");
    std::cout << std::endl;
    DiamondTrap d("Josuke");
    std::cout << std::endl;

    c.takeDamage(10);
    c.beRepaired(10);
    c.attack("The inspector");
    std::cout << std::endl;


    s.beRepaired(10);
    s.takeDamage(10);
    s.attack("ClapTrap");
    s.guardGate();
    std::cout << std::endl;

    f.beRepaired(10);
    f.takeDamage(10);
    f.attack("ClapTrap");
    f.highFiveGuys();
    std::cout << std::endl;


    d.beRepaired(10);
    d.takeDamage(10);
    d.attack("DIO DA");
    d.highFiveGuys();
    d.guardGate();
    d.whoAmI();
    std::cout << std::endl;
}