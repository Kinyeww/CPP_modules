#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed b(a); // will call copy constructor
	Fixed c;

	c = b; // will call copy assignment operator (assigning same class to different object)
	std::cout << a.getRawBits() << '\n';
	std::cout << b.getRawBits() << '\n';
	std::cout << c.getRawBits() << '\n';
	return (0);
}