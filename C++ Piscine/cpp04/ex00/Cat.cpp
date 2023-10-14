#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal("Cat") {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
	std::cout << "Cat assignment operator overload" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat has been destructed" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Meow" << std::endl;
}