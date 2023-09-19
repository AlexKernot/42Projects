#include "Fixed.hpp"

#include <iostream>
#include <fstream>
#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int num) {
	number = num;
	number = number << fractionalPoint;
}

Fixed::Fixed(const float num) {
	number = static_cast<int>(floor(num));
	number = number << fractionalPoint;

	float decimal = num - floor(num);
	decimal = pow(2, fractionalPoint);
	decimal = round(decimal);
	number |= decimal;
}

Fixed& Fixed::operator=(const Fixed& copy) {
	this->number = copy.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return number;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	number = raw;
}

float Fixed::toFloat() const {
	float integerPart = number >> fractionalPoint;
	float decimalPart = 0;
	for (int i = 0; i < fractionalPoint; ++i) {
		decimalPart += 1 * std::pow(2, -i);
	}
	return integerPart + decimalPart;
}

int Fixed::toInt() const {
	return (number >> fractionalPoint);
}

std::ostream& operator<< (std::ostream &out, const Fixed& num) {
	return out << num.toFloat();
}
