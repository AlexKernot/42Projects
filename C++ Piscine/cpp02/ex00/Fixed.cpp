#include "Fixed.hpp"

Fixed::Fixed() {
	number = 0;
}

Fixed::Fixed(const Fixed& copy) {
	this->number = copy.number;
}

Fixed& Fixed::operator=(const Fixed& copy) {
	this->number = copy.number;
}

// Nothing needs to be done here
Fixed::~Fixed() {

}

int Fixed::getRawBits() const {
	return number;
}

void Fixed::setRawBits(int const raw) {
	number = raw;
}