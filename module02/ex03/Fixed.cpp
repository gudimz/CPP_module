#include "Fixed.hpp"

// constructors & destructor:
Fixed::Fixed(void) : _rawBits(0) {};

Fixed::Fixed(const int value) {
	this->_rawBits = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) : _rawBits(value) {
	this->_rawBits = static_cast<int>(roundf(value * (1 << this->_fractionalBits)));
}

Fixed::Fixed(const Fixed& object) {
	*this = object;
}

Fixed::~Fixed(void) {};

// comparison operators overload:
bool Fixed::operator>(const Fixed& rightObj) const {
	return this->_rawBits > rightObj.getRawBits();
}

bool Fixed::operator<(const Fixed& rightObj) const {
	return this->_rawBits < rightObj.getRawBits();
}

bool Fixed::operator>=(const Fixed& rightObj) const {
	return this->_rawBits >= rightObj.getRawBits();
}

bool Fixed::operator<=(const Fixed& rightObj) const {
	return this->_rawBits <= rightObj.getRawBits();
}

bool Fixed::operator==(const Fixed& rightObj) const {
	return this->_rawBits == rightObj.getRawBits();
}

bool Fixed::operator!=(const Fixed& rightObj) const {
	return this->_rawBits != rightObj.getRawBits();
}

// arithmetic operators overload:
Fixed Fixed::operator+(const Fixed& rightObj) {
	Fixed resObj;
	resObj.setRawBits(this->_rawBits + rightObj.getRawBits());
	return resObj;
}

Fixed Fixed::operator-(const Fixed& rightObj) {
	Fixed resObj;
	resObj.setRawBits(this->_rawBits - rightObj.getRawBits());
	return resObj;
}

Fixed Fixed::operator*(const Fixed& rightObj) {
	Fixed resObj;
	long long tmp;
	tmp = static_cast<long long>(this->_rawBits) * static_cast<long long>(rightObj.getRawBits());
	resObj.setRawBits(static_cast<int>((tmp / static_cast<long long>(1 << this->_fractionalBits))));
	return resObj;
}

Fixed Fixed::operator/(const Fixed& rightObj) {
	Fixed resObj;
	if (rightObj.getRawBits() == 0) {
		std::cerr << "Error! Division by zero" << std::endl;
		return *this;
	} else {
		long long tmp;
		tmp = static_cast<long long>(this->_rawBits) * static_cast<long long>(1 << this->_fractionalBits);
		resObj.setRawBits(static_cast<int>(tmp / static_cast<long long>(rightObj.getRawBits())));
	}
	return resObj;
}

// increment & decrement operators overload:
Fixed& Fixed::operator++() {
	++this->_rawBits;
	return *this;
}

Fixed& Fixed::operator--() {
	--this->_rawBits;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed resObj;
	resObj.setRawBits(++this->_rawBits);
	return resObj;
}

Fixed Fixed::operator--(int) {
	Fixed resObj;
	resObj.setRawBits(--this->_rawBits);
	return resObj;
}

// assignation operator overload:
Fixed&  Fixed:: operator=(const Fixed& object) {
	if (this != &object) {
		this->_rawBits = object.getRawBits();
	}
	return *this;
}

// not members operator overloads:
std::ostream& operator<<(std::ostream& os, const Fixed& object) {
	os << object.toFloat();
	return os;
}

// static member function
Fixed& Fixed::min(Fixed& leftObj, Fixed& rightObj) {
	if (leftObj < rightObj) {
		return leftObj;
	} else {
		return rightObj;
	}
}

const Fixed& Fixed::min(const Fixed& leftObj, const Fixed& rightObj) {
	if (leftObj < rightObj) {
		return leftObj;
	} else {
		return rightObj;
	}
}

Fixed& Fixed::max(Fixed& leftObj, Fixed& rightObj) {
	if (leftObj < rightObj) {
		return rightObj;
	} else {
		return leftObj;
	}
}

const Fixed& Fixed::max(const Fixed& leftObj, const Fixed& rightObj) {
	if (leftObj < rightObj) {
		return rightObj;
	} else {
		return leftObj;
	}
}

// members function:
int Fixed::getRawBits(void) const {
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