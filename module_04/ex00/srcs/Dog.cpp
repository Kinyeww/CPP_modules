#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog constructor called" << '\n';
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << '\n';
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << '\n';
}