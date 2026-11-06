#include "FragTrap.hpp"

int	main()
{
	FragTrap a("hehe");
	FragTrap b("haha");

	a.attack("hoho");
	b.takeDamage(50);
	b.attack("hehehehaw");
	b.beRepaired(10);
	a.highFivesGuys();
	return (0);
}