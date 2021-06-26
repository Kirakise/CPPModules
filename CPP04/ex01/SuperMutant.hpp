#pragma once
#include "Enemy.hpp"
#include <string>

class SuperMutant : public Enemy{
    public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int);
};
