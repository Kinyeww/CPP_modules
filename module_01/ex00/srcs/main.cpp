#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie a("Kinyew [stack]");
	Zombie *c = newZombie("Foo [heap]");

	randomChump("random dude [stack]");
	a.announce();
	c->announce();
	delete c;
	return (0);
}