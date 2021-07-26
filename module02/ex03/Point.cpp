#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {};

Point::Point(float const x, float const y) : _x(x), _y(y) {};

Point::Point(const Point& object) {
	*this = object;
}

Point::~Point(void) {};

Point&  Point:: operator=(const Point& object) {
	if (this != &object) {
		this->_x = object._x;
		this->_y = object._y;
	}
	return *this;
}

Fixed& Point::getX(void) {
	return this->_x;
}

Fixed& Point::getY(void) {
	return this->_y;
}