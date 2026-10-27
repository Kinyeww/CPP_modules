#include "Contact.hpp"
#include <iostream>

bool	Contact::init_contact()
{
	std::cout << "First name     : ";
	std::getline(std::cin, first_name);
	if (first_name.empty())
		return (false);
	std::cout << "Last name      : ";
	std::getline(std::cin, last_name);
	if (last_name.empty())
		return (false);
	std::cout << "Nickname       : ";
	std::getline(std::cin, nickname);
	if (nickname.empty())
		return (false);
	std::cout << "Phone Number   : ";
	std::getline(std::cin, phone_num);
	if (phone_num.empty())
		return (false);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret.empty())
		return (false);
	std::cout << "Contact saved successfully!" << std::endl;
	return (true);
}

std::string	Contact::get_item(std::string str)
{
	if (str == "first_name")
		return (first_name);
	else if (str == "last_name")
		return (last_name);
	else if (str == "nickname")
		return (nickname);
	else if (str == "phone_num")
		return (phone_num);
	else if (str == "darkest_secret")
		return (darkest_secret);
	else
		return ("");
}
