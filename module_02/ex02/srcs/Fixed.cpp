#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const int value) : _value(value << fracBits) // multiply by 256
{
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << fracBits))) //float cannot do bitshift so multiply it manually
{
}

Fixed::Fixed(const Fixed &f)
{
	_value = f.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &f)
{
    if (this != &f)
        this->_value = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits() const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

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

//ex02 new function // 6 comparison operator >, <, >=, <=, ==, !=
bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_value < other._value);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

// 4 arithmetic operators +, -, *, /
Fixed	Fixed::operator+(const Fixed &other) const
{
	int		result;
	Fixed	res;

	result = this->_value + other._value;
	res.setRawBits(result);
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	int		result;
	Fixed	res;

	result = this->_value - other._value;
	res.setRawBits(result);
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	int		result;
	Fixed	res;

	result = this->_value * other._value;
	result = result / (1 << fracBits);
	res.setRawBits(result);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	int		result;
	Fixed	res;

	result = this->_value / other._value;
	result = result / (1 << fracBits);
	res.setRawBits(result);
	return (res);
}

// 4 increment/decrement (a++, ++a, a--, --a)
Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret(*this);

	this->_value++;
	return (ret);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret(*this);

	this->_value--;
	return (ret);
}

// min max member function
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._value < b._value)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._value < b._value)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value)
		return (a);
	return (b);
}
