#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {};

Point::Point(float const x, float const y) : _x(x), _y(y) {};

Point::Point(const Point& object) : _x(object._x), _y(object._y) {};

Point::~Point(void) {};

Fixed Point::getX(void) {
	return this->_x;
}

Fixed Point::getY(void) {
	return this->_y;
}