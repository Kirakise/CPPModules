#pragma once
#include "Weapon.hpp"

class HumanA{
    std::string name;
    Weapon *weapon;
    public:
    HumanA(std::string name, Weapon &weapon);
    HumanA(std::string name);
    void setWeapon(Weapon &weapon);
    void attack();
};

class HumanB{
    std::string name;
    Weapon *weapon;
    public:
    HumanB(std::string name, Weapon &weapon);
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack();
};