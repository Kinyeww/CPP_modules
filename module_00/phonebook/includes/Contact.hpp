#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_secret;
	public:
		bool		init_contact();
		std::string	get_item(std::string str);
};

#endif