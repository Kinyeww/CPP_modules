#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &item) : _name(name), weapon(item)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << weapon.getType() << '\n';
}
