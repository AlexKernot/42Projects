#include "Harl.hpp"

#include <iostream>

size_t hash(std::string input) {
	static const size_t hashConstant = 0xf8000000;
	size_t result = 0;

	for (size_t i = 0; i < input.length(); ++i) {
		char current = input.at(i);
		size_t significantBits = result & hashConstant;
		result = result << 5;
		result ^= (significantBits >> 27);
		result ^= current;
	}
	return result;
}

void filter(std::string input) {
	static const size_t WARNING = 91385900434;
	static const size_t ERROR = 74990002;
	static const size_t INFO = 2470031;
	static const size_t DEBUG = 73630439;

	size_t hashedValue = hash(input);
	Harl harl = Harl();
	switch (hashedValue)
	{
		case ERROR:
			harl.complain("error");
			break;
		case WARNING:
			harl.complain("warning");
			harl.complain("error");
			break;
		case INFO:
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case DEBUG:
			harl.complain("debug");
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

int main(int ac, char *av[]) {
	static const std::string defaultOutput 
			= "[ Probably complaining about insignificant problems ]";

	if (ac != 2) {
		std::cout << defaultOutput << std::endl;
		return 0;
	}

	std::string input = av[1];
	if (input.length() > 7 || input.length() < 4) {
		std::cout << defaultOutput << std::endl;
		return 0;
	}
	filter(input);
	return 0;
}