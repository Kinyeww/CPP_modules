#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat constructor called" << '\n';
}

Cat::~Cat()
{
	delete (_brain);
	std::cout << "Cat destructor called" << '\n';
}

Cat::Cat(const Cat& other) : Animal(other)
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
		*this->_brain = *other._brain; // let brain handle the deep copy of the ideas array
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << '\n';
}
