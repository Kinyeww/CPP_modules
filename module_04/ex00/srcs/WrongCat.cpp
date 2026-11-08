#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat constructor called" << '\n';
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << '\n';
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor called" << '\n';
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assignment operator called" << '\n';
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << '\n'; // wont be called since no virtual meaning that it wont 
}