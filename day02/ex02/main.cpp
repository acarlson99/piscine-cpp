#include "Fixed.hpp"
#include <iostream>
int main( void ) {
	Fixed b = 15.5f;
	Fixed c = 19.2f;
	Fixed d = c;
	std::cout << b + c << std::endl;
	std::cout << b - c << std::endl;
	std::cout << b * c << std::endl;
	std::cout << b / c << std::endl;
	std::cout << (b == c) << std::endl;
	std::cout << (d == c) << std::endl;
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
