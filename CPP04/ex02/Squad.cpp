#include "Squad.hpp"
#include "AssaultTerminator.hpp"


Squad::Squad() : count(0), arr(0){
}

Squad &Squad::operator=(Squad const &obj)
{
    this->~Squad();
    Squad *Sq = new Squad();
    t_lst *tmp;
    t_lst *tmp2;

    tmp2 = obj.arr;
    if (!tmp2)
    {
        this->count = 0;
        this->arr = 0;
        return *this;
    }
    Sq->arr = new t_lst;
    tmp = Sq->arr;
    while (tmp2)
    {
        tmp->m = tmp->m->clone();
        tmp->next = 0;
        if (tmp2->next)
        {
            tmp->next = new t_lst;
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
    }
    Sq->count = obj.getCount();
    this->count = Sq->count;
    this->arr = Sq->arr;
}

Squad::Squad(Squad const &obj)
{
    Squad *Sq = new Squad();
    t_lst *tmp;
    t_lst *tmp2;

    tmp2 = obj.arr;
    if (!tmp2)
        return ;
    Sq->arr = new t_lst;
    tmp = Sq->arr;
    while (tmp2)
    {
        tmp->m = tmp->m->clone();
        tmp->next = 0;
        if (tmp2->next)
        {
            tmp->next = new t_lst;
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
    }
    this->arr = Sq->arr;
    this->count = obj.count;
}

Squad::~Squad() {
    t_lst *tmp;
    tmp = this->arr;
    while (this->arr)
    {
        this->arr = this->arr->next;
        delete tmp->m;
        delete tmp;
        tmp = this->arr;
    }
}

int Squad::getCount() const {
    return this->count;
}

ISpaceMarine *Squad::getUnit(int a) const {
    t_lst *tmp;

    tmp = this->arr;
    while (a-- && tmp)
        tmp=tmp->next;
    if (!tmp)
        return (0);
    else
        return tmp->m;
}

int Squad::push(ISpaceMarine *marine) {
    t_lst *tmp = this->arr;
    int i = 0;
    if (tmp == 0)
    {
        this->arr = new t_lst;
        this->arr->m = marine;
        this->arr->next = 0;
        this->count = 1;
        return this->count;
    }
    while (++i && tmp->next)
        tmp = tmp->next;
    tmp->next = new t_lst;
    i++;
    tmp->next->m = marine;
    tmp->next->next = 0;
    this->count = i;
    return i;
}
