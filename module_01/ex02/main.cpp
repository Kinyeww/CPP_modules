#include <string>
#include <iostream>

int	main(void)
{
	std::string message = "HI THIS IS BRAIN";
	std::string *stringPTR = &message;
	std::string &stringREF = message;

	std::cout << &message << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';

	std::cout << message << '\n';	
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
}