#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	fracBits = 8; //static in member means shared value
public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed &operator=(const Fixed &f);
	~Fixed();
	Fixed(const int value);
	Fixed(const float value);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &i);

#endif