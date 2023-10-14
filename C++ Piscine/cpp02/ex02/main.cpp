#include "Fixed.hpp"

#include "divideByZeroException.hpp"

#include <iostream>

void test(int index, const Fixed& output, const Fixed& expected) {
	if (&output != &expected) {
		std::cout << "Test " << index << ": expecting " << expected;
		std::cout << " got " << output << std::endl;
	}
}

void test(int index, bool output, bool expected) {
	if (output != expected) {
		std::cout << std::boolalpha;
		std::cout << "Test " << index << ": expecting " << expected;
		std::cout << " got " << output << std::endl;
	}
}

void test(int index, Fixed res, float expected) {
	const Fixed cmp = Fixed(expected);
	if (res != cmp) {
		std::cout << "Test " << index << ": Expected " << cmp;
		std::cout << " got " << res << std::endl;
	}
}

void addTest() {
	test(1, Fixed(1) + Fixed(1), 2);
	test(2, Fixed(1) + Fixed(-1), 0);
	test(3, Fixed(-1) + Fixed(-1), -2);
	test(4, Fixed(215) + Fixed(215), 430);
	test(5, Fixed(1.5F) + Fixed(1.5F), 3);
	test(6, Fixed(-0.5F) + Fixed(0.5F), 0);
	std::cout << "Addition tests complete." << std::endl;
}

void subtractTest() {
	test(7, Fixed(0) - Fixed(0), 0);
	test(8, Fixed(400) - Fixed(200), 200);
	test(9, Fixed(-0.5F) - Fixed(-0.5F), 0);
	test(10, Fixed(5) - Fixed(10), -5);
	test(11, Fixed(-5) - Fixed(-10), 5);
	std::cout << "Subtraction tests complete." << std::endl;
}

void incTest() {
	Fixed postIncrement(5);

	test(12, postIncrement++, 5);
	test(13, postIncrement, 5.00390625);
	test(14, ++Fixed(5), 5.00390625);
	test(15, postIncrement--, 5.00390625);
	test(16, postIncrement, 5);
	test(17, --Fixed(5), 4.99609375);
	std::cout << "increment tests complete." << std::endl;
}

void multipTest() {
	test(18, Fixed(5) * Fixed(5), 25);
	test(19, Fixed(5) * Fixed(-5), -25);
	test(20, Fixed(-5) * Fixed(-5), 25);
	test(21, Fixed(2.5F) * Fixed(2.5F), 6.25);
	test(22, Fixed(2) * Fixed(2.5F), 5);
	test(23, Fixed(-2.5F) * Fixed(-2.5F), 6.25);
	test(24, Fixed(2.5F) * Fixed(-2.5F), -6.25);
	test(25, Fixed(2.5F) * Fixed(0), 0);
	std::cout << "multiplication tests complete." << std::endl;
}

void divideTest() {
	try {
		test(26, Fixed(1) / Fixed(0), 0);
	} catch (const divideByZeroException&) {
		std::cout << "Successfully throws divide by 0 error" << std::endl;
	}
	test(27, Fixed(4) / Fixed(2), 2);
	test(28, Fixed(2) / Fixed(4), 0.5);
	test(29, Fixed(2) / Fixed(0.5F), 4);
	test(30, Fixed(0.25F) / Fixed(0.5F), 0.5);
	test(31, Fixed(0.5F) / Fixed(0.5F), 1);
	test(32, Fixed(0) / Fixed(5), 0);
	std::cout << "Division tests complete" << std::endl;
}

void comparisonTests() {
	// <
	test(33, Fixed(3) < Fixed(3), false);
	test(34, Fixed(3.00390625F) < Fixed(3), false);
	test(35, Fixed(3) < Fixed(3.0039062F), true);

	// >
	test(36, Fixed(3) > Fixed(3), false);
	test(37, Fixed(3.00390625F) > Fixed(3), true);
	test(38, Fixed(3) > Fixed(3.0039062F), false);

	// <=
	test(39, Fixed(3) <= Fixed(3), true);
	test(40, Fixed(3.00390625F) <= Fixed(3), false);
	test(41, Fixed(3) <= Fixed(3.0039062F), true);

	// >=
	test(42, Fixed(3) >= Fixed(3), true);
	test(43, Fixed(3.00390625F) >= Fixed(3), true);
	test(44, Fixed(3) >= Fixed(3.0039062F), false);

	// ==
	test(45, Fixed(3) == Fixed(3), true);
	test(46, Fixed(3.00390625F) == Fixed(3), false);
	test(47, Fixed(3) == Fixed(3.0039062F), false);

	// !=
	test(48, Fixed(3) != Fixed(3), false);
	test(49, Fixed(3.00390625F) != Fixed(3), true);
	test(50, Fixed(3) != Fixed(3.0039062F), true);

	// Misc
	test(51, Fixed(-1) > Fixed(1), false);
	test(52, Fixed(-1) < Fixed(1), true);
	std::cout << "Comparison tests complete" << std::endl;
}

void minMaxTest() {
	const Fixed a(2.99609375F);
	const Fixed b(3);
	const Fixed c(3.0039062F);
	Fixed d(2.99609375F);
	Fixed e(3);
	Fixed f(3.0039062F);

	test(53, Fixed::min(a, b), a);
	test(54, Fixed::min(b, c), b);
	test(55, Fixed::max(a, b), b);
	test(56, Fixed::max(b, c), c);

	test(57, Fixed::min(d, e), d);
	test(58, Fixed::min(e, f), e);
	test(59, Fixed::max(d, e), e);
	test(60, Fixed::max(e, f), f);
	std::cout << "Min and Max tests complete" << std::endl;
}

int main( void ) {
	addTest();
	subtractTest();
	incTest();
	multipTest();
	divideTest();
	comparisonTests();
	minMaxTest();
	return 0;
}