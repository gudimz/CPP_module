#include "Fixed.hpp"

// constructors & destructor:
Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) : _rawBits(value) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = static_cast<int>(roundf(value * (1 << this->_fractionalBits)));
}

Fixed::Fixed(const Fixed& object) {
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}


// operators overload:
Fixed&  Fixed:: operator=(const Fixed& object) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &object) {
		this->_rawBits = object.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& object) {
	os << object.toFloat();
	return os;
}


//members function:
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(this->_rawBits) / static_cast<float>((1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const {
	return this->_rawBits >> this->_fractionalBits;
}