#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << '\n';
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << '\n';
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called" << '\n';
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called" << '\n';
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << '\n';
}