#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name)
{
	Zombie *a;

	a = new Zombie(name);
	return (a);
}