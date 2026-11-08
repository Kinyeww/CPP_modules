#include <iostream>
#include "Brain.hpp"

Brain::brain()
{
	std::cout << "Brain constructor called" << '\n';
}

Brain::Brain(const Brain& other)
{
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != other)
	{
		
	}
}