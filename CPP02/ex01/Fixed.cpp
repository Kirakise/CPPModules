#include "Fixed.hpp"

Fixed::Fixed()
{
    this->store = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    this->store = obj.store;
}

Fixed::Fixed(const float f)
{
    this->store = f * 256;
}

Fixed::Fixed(const int i)
{
    this->store = i * 256;
}

Fixed::~Fixed(){};

int Fixed::getRawBits( void ) const{
    return this->store;
}
void Fixed::setRawBits( int const raw){
    this->store = raw;
}

Fixed &Fixed::operator=(Fixed const &obj){
        this->store = obj.getRawBits();
        return (*this);
}

float Fixed::toFloat( void ) const
{
    return (float) this->store / 256;
}

int Fixed::toInt( void ) const{
    return (int) this->store / 256;
}

std::ostream &operator<<(std::ostream &os1, const Fixed &obj){
        os1 << obj.toFloat();
        return os1;
}