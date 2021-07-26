#include "Fixed.hpp"
#include "Point.hpp"

float calc(Point p1, Point p2, Point point) {
	Fixed result;

	result = (((p1.getX() - point.getX()) * (p2.getY() - p1.getY())) -
				((p2.getX() - p1.getX()) * (p1.getY() - point.getY())));
	return result.toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float d1, d2, d3;

	d1 = calc(a, b, point);
	d2 = calc(b, c, point);
	d3 = calc(c, a, point);
	return (d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0);
}
