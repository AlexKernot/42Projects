#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy) {
	std::cout << "Brain operator equal overload called" << std::endl;
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
}
