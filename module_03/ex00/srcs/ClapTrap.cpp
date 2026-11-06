#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " default constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed." << '\n';
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap " << _name << " copied." << '\n';
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
	}
	std::cout << "ClapTrap " << _name << " assigned." << '\n';
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hitpoint left." << '\n';
	else if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << '\n';
	}
	else
		std::cout << "Claptrap " << this->_name << " has no energy left!" << '\n';
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount 
			<< " damage! Current HP: " << this->_hitPoints << '\n';
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hitpoint left." << '\n';
	else if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount 
			<< " HP! Current HP: " << this->_hitPoints << '\n';
	}
	else
		std::cout << "Claptrap " << this->_name << " has no energy left!" << '\n';
}