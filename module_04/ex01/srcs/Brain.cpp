#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << '\n';
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << '\n';
}

Brain::Brain(const Brain& other)
{
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		int i = 0;
		while (i < 100)
		{
			this->_ideas[i] = other._ideas[i];
			i++;
		}
	}
	return *this;
}
