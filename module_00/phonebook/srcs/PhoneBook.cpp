#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook()
{
	count = 0;
	next_index = 0;
}

bool	PhoneBook::add_to_contact(void)
{
	Contact	temp;

	if (temp.init_contact() == false)
		return (false);
	contacts[next_index] = temp;
	next_index = (next_index + 1) % 8;
	if (count < 8)
		count++;
	return (true);
}

std::string	format_string(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::search_contact(void)
{
	std::string	input;
	int			index;

	if (count == 0)
	{
		std::cout << "Phonebook is empty :(" << '\n';
		return ;
	}
	display_saved_contact();
	std::cout << "Who would you like to search for?\nIndex : ";
	std::getline(std::cin, input);
	if (input.length() != 1 || input[0] <= '0' || input[0] > (count + '0'))
	{
		std::cout << "Invalid index" << '\n' << "Returning...\n";
		return ;
	}
	index = input[0] - '0';
	display_contact(index);
}

void	PhoneBook::display_saved_contact(void)
{
	int	i;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "\n";
	i = 0;
	while (i < count)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << format_string(contacts[i].get_item("first_name")) << "|";
		std::cout << std::setw(10) << format_string(contacts[i].get_item("last_name")) << "|";
		std::cout << std::setw(10) << format_string(contacts[i].get_item("nickname")) << "\n";
		i++;
	}
}

void	PhoneBook::display_contact(int index)
{
	std::cout << "First_Name : " << contacts[index - 1].get_item("first_name") << "\n";
	std::cout << "Last_Name : " << contacts[index - 1].get_item("last_name") << "\n";
	std::cout << "Nickname : " << contacts[index - 1].get_item("nickname") << "\n";
	std::cout << "Phone_num : " << contacts[index - 1].get_item("phone_num") << "\n";
	std::cout << "Darkest_secret : " << contacts[index - 1].get_item("darkest_secret") << "\n";
}