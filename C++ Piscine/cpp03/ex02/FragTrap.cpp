#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name) {
	std::cout << "FragTrap " << _name << " has been constructed" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy.getName()) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
	std::cout << "FragTrap copy assignment operator overload called" << std::endl;
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destructed" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << ": Great work everyone, high five!" << std::endl;
}