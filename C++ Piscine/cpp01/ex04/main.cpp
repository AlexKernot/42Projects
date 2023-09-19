#include <fstream>
#include <iostream>
#include <cstring>

int main(int ac, char *av[]) {
	if (ac != 4)
		return 0;
	std::ifstream inputFile;
	std::ofstream outputFile;

	// Open file 1
	inputFile.open(av[1], std::ios::in);
	if (inputFile.is_open() == false) {
		std::cout << av[1] << " failed to open." << std::endl;
		return 0;
	}

	// Create file 2
	std::string path = av[1];
	path.append(".replace");
	outputFile.open(path.c_str(), std::ios::out);
	if (outputFile.is_open() == false) {
		std::cout << path << " could not be created." << std::endl;
		return 0;
	}

	std::string line;
	size_t s1Len = std::strlen(av[2]);
	size_t s2Len = std::strlen(av[3]);

	while (inputFile.eof() == false) {
		std::getline(inputFile, line);
		size_t indexFound = line.find(av[2]);
		if (indexFound == std::string::npos) {
			outputFile << line << "\n";
			continue;
		}
		line.insert(indexFound, av[3]);
		line.erase(indexFound + s2Len, s1Len);
		outputFile << line << "\n";
	}
	outputFile.flush();
	return 0;
}