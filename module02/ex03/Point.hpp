#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

# define IN_TRIANGLE "\x1b[32min triangle\x1b[0m"
# define OUT_TRIANGLE "\x1b[31mout triangle\x1b[0m"

class Point {
private:
	Fixed _x;
	Fixed _y;
public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point& object);
	~Point(void);

	Point& operator=(const Point& object);

	Fixed& getX(void);
	Fixed& getY(void);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif