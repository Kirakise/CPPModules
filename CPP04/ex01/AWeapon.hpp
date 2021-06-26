#pragma once
#include <string>

class AWeapon
{
    protected:
    std::string name;
    int apcost;
    int damage;
    AWeapon();
    public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon&);
    virtual ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
    void operator =(const AWeapon&);
};