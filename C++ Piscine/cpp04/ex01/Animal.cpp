#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy) {
	std::cout << "Animal assignment operator overload" << std::endl;
	this->type = copy.type;
	return *this;
}

Animal::Animal(std::string _type) {
	type = _type;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a noise" << std::endl;
}