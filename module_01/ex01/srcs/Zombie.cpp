#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " is dead" << '\n';
}

void	Zombie::announce()
{
	std::cout << name << ':' << " BraiiiiiiinnnzzzZ..." << '\n';
}

void	Zombie::setName(std::string input)
{
	name = input;
}
