#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string _name) : name(_name) {}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string _name) {
	name = _name;
}

Zombie::~Zombie() {
	std::cout << name << " has been slain (destructed)" << std::endl;
}