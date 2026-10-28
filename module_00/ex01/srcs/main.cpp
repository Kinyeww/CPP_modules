#include "PhoneBook.hpp"

static int	check_add(std::string check)
{
	int	i;

	i = 0;
	while (check[i])
		i++;
	if (i != 3)
		return (1);
	if (check[0] != 'a' && check[0] != 'A')
		return (1);
	if (check[1] != 'd' && check[1] != 'D')
		return (1);
	if (check[2] != 'd' && check[2] != 'D')
		return (1);
	return (0);
}

static int	check_search(std::string check)
{
	int	i;

	i = 0;
	while (check[i])
		i++;
	if (i != 6)
		return (1);
	if (check[0] != 's' && check[0] != 'S')
		return (1);
	if (check[1] != 'e' && check[1] != 'E')
		return (1);
	if (check[2] != 'a' && check[2] != 'A')
		return (1);
	if (check[3] != 'r' && check[3] != 'R')
		return (1);
	if (check[4] != 'c' && check[4] != 'C')
		return (1);
	if (check[5] != 'h' && check[5] != 'H')
		return (1);
	return (0);
}

static int	check_exit(std::string check)
{
	int	i;

	i = 0;
	while (check[i])
		i++;
	if (i != 4)
		return (1);
	if (check[0] != 'e' && check[0] != 'E')
		return (1);
	if (check[1] != 'x' && check[1] != 'X')
		return (1);
	if (check[2] != 'i' && check[2] != 'I')
		return (1);
	if (check[3] != 't' && check[3] != 'T')
		return (1);
	return (0);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	check;

	std::cout << "Hi, welcome to ONE-WISH phonebook, how can we help you?\nYou may do: (add, search, exit)\n:";
	while (std::getline(std::cin, check))
	{
		if (check_add(check) == 0)
			phonebook.add_to_contact();
		else if (check_search(check) == 0)
			phonebook.search_contact();
		else if (check_exit(check) == 0)
			break ;
		std::cout << "\nwhat do you wanna do next? (add, search, exit) : ";
	}
	return (0);
}
