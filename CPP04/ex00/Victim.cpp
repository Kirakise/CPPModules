#include "Victim.hpp"
#include <string>
#include <iostream>

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << this->name << " appeared" << std::endl;
}

std::string Victim::getName()
{
    return this->name;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator<< (std::ostream &os, Victim &vic)
{
    os << "I'm " << vic.getName() << " and i like otters" << std::endl;
    return os;
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}