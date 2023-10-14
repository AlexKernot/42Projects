#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string _name) {
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
	name = _name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	name = "None";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
	std::cout << "ClapTrap copy constructor operator called" << std::endl;
	this->name = copy.getName();
	this->hitPoints = copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
	this->attackDamage = copy.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap: " << name << " destructed" << std::endl;
}

std::string ClapTrap::getName() const {
	return name;
}

void ClapTrap::setName(const std::string _name) {
	name = _name;
}

int ClapTrap::getHitPoints() const {
	return hitPoints;
}

void ClapTrap::setHitPoints(const int _hitPoints) {
	hitPoints = _hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

void ClapTrap::setEnergyPoints(const int _energyPoints) {
	energyPoints = _energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return attackDamage;
}

void ClapTrap::setAttackDamage(const int _attackDamage) {
	attackDamage = _attackDamage;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints < 1) {
		std::cout << "ClapTrap " << name << "  tried to attack but has no health" << std::endl;
		return;
	}
	if (energyPoints < 1) {
		std::cout << "ClapTrap " << name << "  tried to attack but has no energy" << std::endl;
		return;
	}
	--energyPoints;
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "Claptrap " << name << " takes " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints < 1) {
		std::cout << "ClapTrap " << name << "  tried to repair but has no health" << std::endl;
		return;
	}
	if (energyPoints < 1) {
		std::cout << "ClapTrap " << name << "  tried to repair but has no energy" << std::endl;
		return;
	}
	--energyPoints;
	hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " repairs " << amount;
	std::cout << " points of health." << std::endl;
}