#pragma once
#include "Victim.hpp"

class Peon : public Victim{
    public:
    Peon(std::string name);
    ~Peon();
    void getPolymorphed() const;
};