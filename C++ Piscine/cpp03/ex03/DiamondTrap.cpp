#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() {

}

DiamondTrap::DiamondTrap(const std::string&) {

}

DiamondTrap::DiamondTrap(const DiamondTrap&) {

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap&) {

}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " has been destructed" << std::endl;
}

void DiamondTrap::attack(const std::string&) {

}

void DiamondTrap::whoAmI() {

}