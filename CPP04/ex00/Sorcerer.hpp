#pragma once
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer{
    std::string name;
    std::string title;
    Sorcerer();
    public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    void polymorph(Victim const &) const;
    std::string getName(void);
    std::string getTitle(void);
};

std::ostream &operator<< (std::ostream &, Sorcerer &);