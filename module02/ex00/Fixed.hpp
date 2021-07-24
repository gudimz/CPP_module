#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
	int _rawBits;
	static const int _fractionalBits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed& object);

	Fixed& operator=(const Fixed& object);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};



#endif