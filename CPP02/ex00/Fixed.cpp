#include "Fixed.hpp"

Fixed::Fixed()
{
    this->store = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    this->store = obj.store;
}

Fixed::~Fixed(){};
int Fixed::getRawBits( void ) const{
    return this->store;
}
void Fixed::setRawBits( int const raw){
    this->store = raw;
}