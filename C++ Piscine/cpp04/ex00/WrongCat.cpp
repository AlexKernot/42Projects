#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Wrong cat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal() {
	*this = copy;
	std::cout << "Wrong cat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	(void)copy;
	std::cout << "Wrong cat operator equal overload called" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong cat destructed" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
