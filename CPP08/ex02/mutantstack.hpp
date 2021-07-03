#pragma once
#include <stack>
#include <deque>
template <typename T>
class MutantStack : public std::stack<T>{
    public:

    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack& obj) : std::stack<T>(obj){};
    ~MutantStack() {};

    MutantStack &operator=(const MutantStack &obj)
    {
        if (this == &obj)
            return (*this);
        std::stack<T>::operator=(obj);
        return (*this);
    };

    iterator begin() { return std::stack<T>::c.begin(); }
	iterator end(void) {return std::stack<T>::c.end();}
};