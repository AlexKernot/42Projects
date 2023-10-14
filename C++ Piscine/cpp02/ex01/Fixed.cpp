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
	std::cout << "Int constructor called" << std::endl;
	number = num;
	number = number << fractionalPoint;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	number = roundf(num * 256);
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
	float retVal = number;
	retVal /= 256;
	return retVal;
}

int Fixed::toInt() const {
	return (number >> fractionalPoint);
}

std::ostream& operator<< (std::ostream &out, const Fixed& num) {
	return out << num.toFloat();
}
