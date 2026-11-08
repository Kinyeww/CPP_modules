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

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << '\n'; // wont be called since no virtual meaning that it wont 
}