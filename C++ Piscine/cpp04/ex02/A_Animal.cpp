#include "A_Animal.hpp"

A_Animal::A_Animal() {
	std::cout << "Default animal constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal& copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

A_Animal& A_Animal::operator=(const A_Animal& copy) {
	std::cout << "Animal assignment operator overload" << std::endl;
	this->type = copy.type;
	return *this;
}

A_Animal::A_Animal(std::string _type) {
	type = _type;
}

A_Animal::~A_Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string A_Animal::getType() const {
	return type;
}