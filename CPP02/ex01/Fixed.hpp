#pragma once
#include <iostream>
#include <string>

class Fixed{
    int store;
    static const int frbit = 8;
    public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(const Fixed &a);
    ~Fixed();
    Fixed &operator = (Fixed const &obj);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw);
};

std::ostream& operator<<(std::ostream& os1, const Fixed &obj);