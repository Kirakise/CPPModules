#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
    public:
    PowerFist();
    ~PowerFist();
    void attack() const;
};