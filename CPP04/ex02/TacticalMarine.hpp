#pragma once
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
    TacticalMarine();
    ~TacticalMarine();
    TacticalMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};