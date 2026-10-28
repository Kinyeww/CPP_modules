#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *theHorde;
	int		a;

	a = 0;
	theHorde = new Zombie[N];
	while (a < N)
	{
		theHorde[a].setName(name);
		a++;
	}
	return (theHorde);
}
