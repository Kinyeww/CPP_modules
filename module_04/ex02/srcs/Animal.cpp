#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	_type = "Default Animal";
	std::cout << "Animal default constructor called" << '\n';
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << '\n';
}
Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called" << '\n';
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operator called" << '\n';
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

// void Animal::makeSound() const
// {
// 	std::cout << "Animal makes a sound" << '\n';
// }

std::string Animal::getType() const
{
	return (_type);
}