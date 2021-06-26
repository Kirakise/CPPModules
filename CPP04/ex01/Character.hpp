#pragma once
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character{
    private:
    std::string name;
    int ap;
    AWeapon *weapon;
    public:
    Character(std::string const &name);
    ~Character();
    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
    std::string getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;
};

std::ostream &operator<< (std::ostream &os, Character const &ch);