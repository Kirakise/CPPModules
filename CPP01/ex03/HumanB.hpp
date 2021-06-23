#pragma once

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanB{
    std::string name;
    Weapon *weapon;
    public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack();
};