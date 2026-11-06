#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : 	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor is called" << '\n';
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
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
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called" << '\n';
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hitpoint left." << '\n';
	else if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << '\n';
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
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hitpoint left." << '\n';
	else if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " heals itself for " << amount << '.' << '\n';
	}
	else
		std::cout << "Claptrap " << this->_name << " has no energy left!" << '\n';
}