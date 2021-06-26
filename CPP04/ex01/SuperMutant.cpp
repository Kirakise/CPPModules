#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant") {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int a){
    if (a > 3)
        this->hp -= a - 3;
    if (this->hp <= 0)
        this->~SuperMutant();
}
