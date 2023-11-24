#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
	std::cout << "Wrong animal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	(void)copy;
	std::cout << "Wrong animal operator equal overload" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructed" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong animal makes a weird noise" << std::endl;
}
