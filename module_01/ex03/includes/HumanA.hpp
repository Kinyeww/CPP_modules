#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class	HumanA
{
	private:
		std::string _name;
		Weapon		&weapon;
	public:
		HumanA(std::string name, Weapon &item);
		~HumanA();
		void	attack();
};

#endif