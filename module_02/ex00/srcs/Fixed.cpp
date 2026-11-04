#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy Constructor called" << '\n';
	_value = f.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &f)  // avoid self assignment
        this->_value = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << '\n';
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << '\n';
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setting raw bits" << '\n';
	_value = raw;
}
