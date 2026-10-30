#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string input);
		const std::string	&getType() const;
		void				setType(std::string newName);
};

#endif