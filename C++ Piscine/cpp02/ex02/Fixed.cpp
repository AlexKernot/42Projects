#include "Fixed.hpp"

#include "divideByZeroException.hpp"

#include <iostream>
#include <fstream>
#include <cmath>

Fixed::Fixed() {
	if (outputDebugMessages)
		std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::Fixed(const Fixed& copy) {
	if (outputDebugMessages)
		std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int num) {
	if (outputDebugMessages)
		std::cout << "Int constructor called" << std::endl;
	number = num;
	number = number << fractionalPoint;
}

Fixed::Fixed(const float num) {
	if (outputDebugMessages)
		std::cout << "Float constructor called" << std::endl;
	number = roundf(num * 256);
}

Fixed& Fixed::operator=(const Fixed& copy) {
	if (outputDebugMessages)
		std::cout << "Copy assignment operator called" << std::endl;
	this->number = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	if (outputDebugMessages)
		std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	if (outputDebugMessages)
		std::cout << "getRawBits member function called" << std::endl;
	return number;
}

void Fixed::setRawBits(int const raw) {
	if (outputDebugMessages)
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

bool Fixed::operator<(const Fixed& cmp) const {
	return this->getRawBits() < cmp.getRawBits();
}

bool Fixed::operator>(const Fixed& cmp) const {
	return this->getRawBits() > cmp.getRawBits();
}

bool Fixed::operator<=(const Fixed& cmp) const {
	return this->getRawBits() <= cmp.getRawBits();
}

bool Fixed::operator>=(const Fixed& cmp) const {
	return this->getRawBits() >= cmp.getRawBits();
}

bool Fixed::operator==(const Fixed& cmp) const {
	return this->getRawBits() == cmp.getRawBits();
}

bool Fixed::operator!=(const Fixed& cmp) const {
	return this->getRawBits() != cmp.getRawBits();
}

Fixed Fixed::operator+(const Fixed& add) const {
	Fixed res;
	res.setRawBits(this->getRawBits() + add.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed& add) const {
	Fixed res;
	res.setRawBits(this->getRawBits() - add.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed& add) const {
	int64_t multiply = this->getRawBits() * add.getRawBits();
	Fixed res;
	res.setRawBits(multiply >> 8);
	return res;
}

Fixed Fixed::operator/(const Fixed& add) const {
	int64_t a = this->getRawBits();
	int64_t b = add.getRawBits();
	if (b == 0) {
		throw divideByZeroException();
	}
	float res = (float)a / (float)b;
	return Fixed(res);
}

Fixed& Fixed::operator++() {
	int rawBits = this->getRawBits();
	this->setRawBits(rawBits + 1);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old = *this;
	operator++();
	return old;
}

Fixed& Fixed::operator--() {
	int rawBits = this->getRawBits();
	this->setRawBits(rawBits - 1);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;
	operator--();
	return old;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
}

std::ostream& operator<< (std::ostream &out, const Fixed& num) {
	return out << num.toFloat();
}