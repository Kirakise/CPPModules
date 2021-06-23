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

