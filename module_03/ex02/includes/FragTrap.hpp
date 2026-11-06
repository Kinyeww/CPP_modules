#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap &operator=(const FragTrap& other);
		~FragTrap();

		// overriding base class attack function
		void	attack(const std::string& target);

		//special member function
		void	highFivesGuys();
};

#endif