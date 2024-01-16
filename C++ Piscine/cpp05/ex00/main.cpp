#include "Bureaucrat.h"

#include <iostream>
#include <exception>

int main()
{
	Bureaucrat tom("Tom", 1);
	Bureaucrat fred("Fred", 2);
	Bureaucrat bobby("Bobby", 150);

	try {
		Bureaucrat fraud("Fraud", 0);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat randomGuy("Random Guy", 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		tom++;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		bobby--;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	fred++;
	std::cout << fred << " (should be 1)" << std::endl;
	return 0;
}
