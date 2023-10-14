#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy.getName()) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name) {
	std::cout << "ScavTrap " << _name << " has been constructed" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
	std::cout << "ScavTrap operator copy overload called" << std::endl;
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destructed" << std::endl;
}

void ScavTrap::guardGate() {
	if (this->getHitPoints() < 1) {
		std::cout << "ClapTrap " << this->getName() << "  tried to guard but has no health" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " is now guarding the gate" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->getHitPoints() < 1) {
		std::cout << "ScavTrap " << this->getName() << "  tried to attack but has no health" << std::endl;
		return;
	}
	if (this->getEnergyPoints() < 1) {
		std::cout << "ScavTrap " << this->getName() << "  tried to attack but has no energy" << std::endl;
		return;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage" << std::endl;
}