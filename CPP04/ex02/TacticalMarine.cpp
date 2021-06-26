#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine *TacticalMarine::clone() const{
    TacticalMarine *t = new TacticalMarine();
    return t;
}

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout <<  "* attacks with a chainsword *" << std::endl;
}
