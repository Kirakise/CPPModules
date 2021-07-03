#pragma once
#include <exception>
template <typename T>
class Array{
    T *arr;
    int size;
    public:
    Array();
    ~Array();
    Array(unsigned int);
    Array(Array &a);
    Array &operator=(Array const &a);
    T &operator[](int a);
    T &operator[](int a) const;
    class OutOfRangeExp : public std::exception{
        public:
        const char * what() const throw();
    };
    unsigned int getSize() const;
};

template <typename T>
Array<T>::Array(){
    this->arr = 0;
    size = 0;
}

template <typename T>
Array<T>::~Array(){};

template <typename T>
Array<T>::Array(unsigned int a)
{
    this->arr = new T[a]();
    this->size = a;
}

template <typename T>
Array<T>::Array(Array &a)
{
    this->arr = new T[a.getSize()]();
    for (unsigned int i = 0; i < this->getSize(); i++)
    {
        this->arr[i] = a[i];
    }
    this->size = a.getSize();
}

template <typename T>
T &Array<T>::operator[](int a)
{
    if (a >= this->size || a < 0)
        throw OutOfRangeExp();
    return this->arr[a];
}

template <typename T>
T &Array<T>::operator[](int a) const
{
    if (a >= this->size || a < 0)
        throw OutOfRangeExp();
    return this->arr[a];
}


template <typename T>
const char *Array<T>::OutOfRangeExp::what() const throw(){
    return "Index out of range!";
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return this->size;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &a)
{
    if (this->arr)
        delete this->arr;
    this->arr = new T[a.getSize()]();
    for (unsigned int i = 0; i < a.getSize(); i++)
        this->arr[i] = a[i];
    this->size = a.getSize();
    return *this;
}