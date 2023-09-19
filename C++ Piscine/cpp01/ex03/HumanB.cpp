#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string _name) : name(_name) {
	weapon = 0;
}

void HumanB::setWeapon(Weapon& _weapon) {
	weapon = &_weapon;
}

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}