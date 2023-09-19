#include <string>
#include <iostream>

int main(int ac, char* av[]) {
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string output = std::string();
	for (int i = 1; av[i] != nullptr; ++i) {
		std::string input = av[i];
		for (size_t j = 0; j < input.length(); ++j)
			output.push_back(static_cast<char>(toupper(input.at(j))));
	}
	std::cout << output << std::endl;
	return (0);
}