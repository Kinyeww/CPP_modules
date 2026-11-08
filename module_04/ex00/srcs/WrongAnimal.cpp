#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Default WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << '\n';
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << '\n';
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called" << '\n';
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy assignment operator called" << '\n';
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a sound" << '\n';
}

std::string WrongAnimal::getType() const
{
	return (_type);
}