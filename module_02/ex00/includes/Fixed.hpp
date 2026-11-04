#ifndef FIXED_HPP
# define FIXED_HPP



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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif