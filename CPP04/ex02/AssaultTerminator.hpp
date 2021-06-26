#pragma once
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
    AssaultTerminator();
    ~AssaultTerminator();
    AssaultTerminator* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};