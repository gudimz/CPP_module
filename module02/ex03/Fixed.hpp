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

	// comparison operators overload:
	bool operator>(const Fixed& rightObj) const;
	bool operator<(const Fixed& rightObj) const;
	bool operator>=(const Fixed& rightObj) const;
	bool operator<=(const Fixed& rightObj) const;
	bool operator==(const Fixed& rightObj) const;
	bool operator!=(const Fixed& rightObj) const;

	// arithmetic operators overload:
	Fixed operator+(const Fixed& rightObj);
	Fixed operator-(const Fixed& rightObj);
	Fixed operator*(const Fixed& rightObj);
	Fixed operator/(const Fixed& rightObj);

	// increment & decrement operators overload:
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);


	// assignation operator overload:
	Fixed& operator=(const Fixed& object);

	// static member function
	static Fixed& min(Fixed& leftObj, Fixed& rightObj);
	static const Fixed& min(const Fixed& leftObj, const Fixed& rightObj);
	static Fixed& max(Fixed& leftObj, Fixed& rightObj);
	static const Fixed& max(const Fixed& leftObj, const Fixed& rightObj);
	// members function:
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

// not members operator overloads:
std::ostream& operator<<(std::ostream& os, const Fixed& object);

#endif