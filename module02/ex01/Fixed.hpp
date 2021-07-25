#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int _rawBits;
	static const int _fractionalBits = 8;
public:
	// constructors & destructor:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& object);
	~Fixed(void);

	// members operator overloads:
	Fixed& operator=(const Fixed& object);

	//members function:
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

// not members operator overloads:
std::ostream& operator<<(std::ostream& os, const Fixed& object);

#endif