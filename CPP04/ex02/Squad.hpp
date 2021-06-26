#pragma once
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad{
    int count;
    typedef struct s_lst{
        ISpaceMarine *m;
        struct s_lst *next;
    }               t_lst;
    t_lst *arr;
    public:
    Squad();
    ~Squad();
    int getCount() const;
    ISpaceMarine *getUnit(int) const;
    int push(ISpaceMarine *);
};