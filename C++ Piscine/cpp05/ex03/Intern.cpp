#include "Intern.h"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.h"

Intern::Intern() {	}
Intern::Intern(const Intern& copy) { (void)copy;	}

Intern& Intern::operator=(const Intern& copy) {
	(void)copy;
	return *this;
}

Intern::~Intern() {	}

AForm *Intern::makeShrub(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string type, std::string target)
{
	AForm *(*pointers[])(std::string target) = {&makeRobot, &makeShrub, &makePardon};
	const std::string a[] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};

	for (int i = 0; i < 3; ++i) {
		if (type == a[i])
			return pointers[i](target);
	}
	std::cout << "No forms found with type " << type << std::endl;
	return NULL;
}
