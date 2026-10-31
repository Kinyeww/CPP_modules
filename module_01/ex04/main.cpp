#include "replacing.hpp"
#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "usage: ./replace <filename.txt> <old text> <new text>" << '\n';
		return (0);
	}
	std::string		filename = av[1];
	std::string		oldText = av[2];
	std::string		newText = av[3];
	std::string		outFilename = filename + ".replace";
	std::string		text;
	std::string		result;
	std::ifstream	in(filename.c_str());
	size_t			pos = 0;
	size_t			next;
	char			c;

	if (oldText.empty() == true)
	{
		std::cout << "Error: old text cannot be empty" << '\n';
		return (1);
	}
	if (in.is_open() == false)
	{
		std::cout << "Error: File cant be opened" << '\n';
		return (1);
	}
	std::ofstream	out(outFilename.c_str());
	if (!out)
	{
		std::cout << "Error: Cannot create output file" << '\n';
		return (1);
	}
	while (in.get(c))
		text += c;
	next = text.find(oldText, pos);
	while (next != std::string::npos)
	{
		result += text.substr(pos, next - pos);
		result += newText;
		pos = next + oldText.length();
		next = text.find(oldText, pos);
	}
	result += text.substr(pos);
	out << result;
	if (!out)
	{
		std::cout << "Error: Failed to write to output file" << '\n';
		return (1);
	}
	return (0);
}
