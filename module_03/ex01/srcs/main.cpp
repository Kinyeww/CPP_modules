#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("hehe");
	ScavTrap b("haha");

	a.attack("hoho");
	b.takeDamage(50);
	b.attack("hehehehaw");
	b.beRepaired(10);
	a.guardGate();
	return (0);
}