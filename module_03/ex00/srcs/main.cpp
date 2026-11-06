#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("hehe");
	ClapTrap b("haha");

	a.attack("hoho"); //pdf mention should not interact with other
	b.takeDamage(50);
	b.attack("hehehehaw");
	b.beRepaired(10);
	return (0);
}