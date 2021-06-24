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
    bool operator < (Fixed const &obj) const;
    bool operator <= (Fixed const &obj) const;
    bool operator > (Fixed const &obj) const;
    bool operator >= (Fixed const &obj) const;
    bool operator == (Fixed const &obj) const;
    bool operator != (Fixed const &obj) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw);
    static Fixed min(Fixed &a, Fixed &b);
    static Fixed max(Fixed &a, Fixed &b);
    static Fixed min(Fixed const &a, Fixed const &b);
    static Fixed max(Fixed const &a, Fixed const &b);
};


Fixed operator + (Fixed const &obj1, Fixed const &obj2);
Fixed operator - (Fixed const &obj1, Fixed const &obj2);
Fixed operator * (Fixed const &obj1, Fixed const &obj2);
Fixed operator / (Fixed const &obj1, Fixed const &obj2);
std::ostream& operator<<(std::ostream& os1, const Fixed &obj);