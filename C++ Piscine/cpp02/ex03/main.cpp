#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

#include <iostream>

int main( void ) {
	Point a(2, 3);
	Point b(4, 2);
	Point c(3, 1);

	Point point(3, 2);
	std::cout << std::boolalpha;
	std::cout << "Expected true:  " << bsp(a, b, c, point) << std::endl;
	std::cout << "Expected false: " << bsp(point, b, c, a) << std::endl;
	std::cout << "Expected false: " << bsp(a, point, b, c) << std::endl;
	std::cout << "Expected false: " << bsp(a, a, a, a) << std::endl;
	std::cout << "Expected false: " << bsp(a, a, b, a) << std::endl;
	std::cout << "Expected false: " << bsp(a, b, c, a) << std::endl;

	Point d(1, 2);
	Point point2(2, 2);
	std::cout << "Expected false: " << bsp(a, b, d, point2) << std::endl;
	std::cout << "Expected true:  " << bsp(a, c, d, point2) << std::endl;
	std::cout << "Expected false: " << bsp(a, c, d, point) << std::endl;
	std::cout << "Expected true:  " << bsp(a, b, c, point) << std::endl;
	std::cout << "Expected false: " << bsp(a, b, c, point2) << std::endl;
	return 0;
}