#pragma once
#include <string>

class Enemy
{
    protected:
    int hp;
    std::string type;
    Enemy();
    public:
    Enemy (int hp, std::string const & type);
    virtual ~Enemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};