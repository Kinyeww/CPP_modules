#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed(const int value) : _value(value << fracBits) // multiply by 256
{
	std::cout << "Int constructor called" << '\n';
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << fracBits))) //float cannot do bitshift so multiply it manually
{
	std::cout << "Float constructor called" << '\n';
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy Constructor called" << '\n';
	_value = f._value;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &f)
        this->_value = f._value;
    return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << '\n';
}

int	Fixed::getRawBits() const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

//ex01 new functions
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << fracBits));
}

int	Fixed::toInt(void) const
{
	return (_value / (1 << fracBits));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &i)
{
	o << i.toFloat();
	return o;
}