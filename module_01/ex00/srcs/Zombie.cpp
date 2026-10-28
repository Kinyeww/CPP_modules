#include "zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string input)
{
	name = input;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead" << '\n';
}

void	Zombie::announce()
{
	std::cout << name << ':' << " BraiiiiiiinnnzzzZ..." << '\n';
}