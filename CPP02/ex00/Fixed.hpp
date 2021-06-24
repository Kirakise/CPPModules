#pragma once
#include <string>

class Fixed{
    int store;
    static const int frbit = 8;
    public:
    Fixed();
    Fixed(const Fixed &a);
    ~Fixed();
    Fixed operator = (Fixed const &obj){
        Fixed tmp(obj);
        return tmp;
    }
    int getRawBits( void ) const;
    void setRawBits( int const raw);
};