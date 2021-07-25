#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "******   my case   ******" << std::endl;
	std::cout << "[4.2f] + [2.1f] = " << Fixed(4.2f) + Fixed(2.1f) << std::endl;
	std::cout << "[4.2f] - [2.1f] = " << Fixed(4.2f) - Fixed(2.1f) << std::endl << std::endl;
	std::cout << "[4.2f] * [2] = " << Fixed(4.2f) * Fixed(2) << std::endl;
	std::cout << "[4.2f] / [2] = " << Fixed(4.2f) / Fixed(2) << std::endl;
	std::cout << "[8388607] / [2] = " << Fixed(8388607) / Fixed(2) << std::endl;
	return 0;
}