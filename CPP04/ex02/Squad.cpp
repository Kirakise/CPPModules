#include "Squad.hpp"
#include "AssaultTerminator.hpp"


Squad::Squad() : count(0), arr(0){
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
