#include "Zombie.hpp"

int	main(void)
{
	Zombie *theHorde;
	int		num;

	num = 10;
	theHorde = zombieHorde(num, "bob");
	while (num > 0)
	{
		theHorde[num - 1].announce();
		num--;
	}
	delete [] theHorde;
	return (0);
}