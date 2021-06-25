#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << " " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << " " << this->title << " is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName()
{
    return this->name;
}

std::string Sorcerer::getTitle()
{
    return this->title;
}

void Sorcerer::polymorph(Victim const &obj) const{
    obj.getPolymorphed();
}

std::ostream &operator<< (std::ostream &os, Sorcerer &obj)
{
    os <<  "I am " << obj.getName() << ", " << obj.getTitle() << ", and i like ponies!" << std::endl;
    return (os);
}
