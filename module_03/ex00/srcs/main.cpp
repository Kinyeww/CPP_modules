#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("liting");
	ClapTrap b("kinyew");

	a.attack("kinyew");
	b.takeDamage(50);
	b.attack("liting");
	// b.beRepaired(10);
	for (int i = 0; i < 10; i++)
		b.attack("testing");
	return (0);
}