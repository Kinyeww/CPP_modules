#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog constructor called" << '\n';
}

Dog::~Dog()
{
	delete (_brain);
	std::cout << "Dog destructor called" << '\n';
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << '\n';
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called" << '\n';
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << '\n';
}