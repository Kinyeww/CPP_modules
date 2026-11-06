#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " default constructed." << '\n';
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constructed." << '\n';
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << this->_name << " copied." << '\n';
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
	}
	std::cout << "FragTrap " << this->_name << " assigned." << '\n';
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destructed." << '\n';
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no hitpoint left." << '\n';
	else if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << '\n';
	}
	else
		std::cout << "FragTrap " << this->_name << " has no energy left!" << '\n';
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " asks: \"High five, guys? Anyone?\"" << '\n';
}