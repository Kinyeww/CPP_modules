#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string input);
		~Zombie();
		void	announce();
};

Zombie*	newZombie(std::string input);
void	randomChump(std::string input);

#endif
