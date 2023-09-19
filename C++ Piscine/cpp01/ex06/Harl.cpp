#include "Harl.hpp"

#include <iostream>

void Harl::debug(void) {
	static const std::string cyan = "\x1b[0;36m";
	std::cout << cyan;
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-\n";
	std::cout << "triple-pickle-special-ketchup burger. I really do\n";
	std::cout << std::endl;
}

void Harl::info(void) {
	static const std::string green = "\x1b[0;32m";
	std::cout << green;
	std::cout << "[INFO] \n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't put enough bacon in my burger! If you did,\n";
	std::cout << "Is wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
	static const std::string yellow = "\x1b[0;33m";
	std::cout << yellow;
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've\n";
	std::cout << "been coming for years whereas you started working\n";
	std::cout << "here since last month.\n" << std::endl;
}

void Harl::error(void) {
	static const std::string red = "\x1b[0;31m";
	std::cout << red;
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
}

void Harl::complain(std::string level) {
	static const int numberOfLevels = 4;
	static const std::string levels[numberOfLevels] = {"debug", "info", "warning", "error"};
	void (Harl::*yell[numberOfLevels])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < numberOfLevels; ++i) {
		if (level == levels[i]) {
			(this->*yell[i])();
			return;
		}
	}
}