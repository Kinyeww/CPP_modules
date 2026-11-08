#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << '\n';
}

Cat::~Cat()
{
	delete (this);
	std::cout << "Cat destructor called" << '\n';
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << '\n';
}