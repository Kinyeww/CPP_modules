#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &type)
{
	weapon = &type;
}

void	HumanB::attack()
{
	if (weapon == NULL)
		return ;
	std::cout << _name << " attacks with their " << weapon->getType() << '\n'; 
}