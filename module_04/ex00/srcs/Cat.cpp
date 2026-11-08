#include <iostream>
#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << '\n';
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << '\n';
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << '\n';
	Animal::operator=(other);
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
