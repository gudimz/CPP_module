#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(0.0f, 7.5f);
	Point b(7.5f, 0.0f);
	Point c(0.0f, 0.0f);

	Point p1(3.2f, 2.0f);
	Point p2(8.0f, 3.3f);
	Point p3(0.0f, 7.0f);

	std::cout << "abc <- p1(3.2f, 2.0f) " << (bsp(a, b, c, p1) ? IN_TRIANGLE : OUT_TRIANGLE) << std::endl;
	std::cout << "cba <- p1(3.2f, 2.0f) " << (bsp(c, b, a, p1) ? IN_TRIANGLE : OUT_TRIANGLE) << std::endl;
	std::cout << "abc <- p2(8.0f, 3.3f) " << (bsp(a, b, c, p2) ? IN_TRIANGLE : OUT_TRIANGLE) << std::endl;
	std::cout << "abc <- p2(0.0f, 7.0f) " << (bsp(a, b, c, p3) ? IN_TRIANGLE : OUT_TRIANGLE) << std::endl;
	return 0;
}