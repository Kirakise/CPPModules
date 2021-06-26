#pragma once
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
    public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    void attack() const;
};