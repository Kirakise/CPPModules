#pragma once
#include <string>

class Weapon {
    std::string type;
    public:
    Weapon();
    Weapon(std::string type);
    void setType(std::string);
    std::string getType();
};