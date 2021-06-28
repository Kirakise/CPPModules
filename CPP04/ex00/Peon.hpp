#pragma once
#include "Victim.hpp"

class Peon : public Victim{
    public:
    Peon(std::string name);
    virtual ~Peon();
    void getPolymorphed() const;
};