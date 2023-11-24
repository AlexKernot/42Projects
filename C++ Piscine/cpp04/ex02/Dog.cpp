#include "Dog.hpp"

Dog::Dog() : A_Animal("Dog") {
	brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& copy) : A_Animal("Dog") {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
	(void)copy;
	
	std::cout << "Dog operator equals overload function called" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructed :(" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}