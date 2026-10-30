#include "Weapon.hpp"

Weapon::Weapon(std::string input)
{
	type = input;
}

const std::string &Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string newName)
{
	type = newName;
}