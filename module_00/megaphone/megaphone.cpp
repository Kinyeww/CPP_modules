#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n'; // using '\n' instead of endl here because endl force output buffer to flush right away, best for crash report especially when u want the output to be immediately
		return (0);
	}
	i = 0;
	while (av[++i])
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << static_cast<char>(std::toupper(av[i][j]));
			j++;
		}
	}
	std::cout << '\n';
	return (0);
}
