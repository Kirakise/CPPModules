#pragma once
#include <string>
#include <iostream>

class Victim{
    protected:
    std::string name;
    public:
    Victim(std::string name);
    ~Victim();
    virtual void getPolymorphed() const;
    void announce();
    std::string getName(void);
};

std::ostream &operator<< (std::ostream &, Victim &);