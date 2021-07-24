#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& object) {
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed&  Fixed:: operator=(const Fixed& object) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &object) {
		this->_rawBits = object.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "getRawBits member function called" << std::endl;
	this->_rawBits = raw;
}
