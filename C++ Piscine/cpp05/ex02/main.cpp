#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <exception>

int main()
{
	Bureaucrat tom("Tom", 1);
	Bureaucrat fred("Fred", 2);
	Bureaucrat joey("Joey", 75);
	Bureaucrat bobby("Bobby", 150);
	Bureaucrat nobody;

	ShrubberyCreationForm shrubForm;
	ShrubberyCreationForm shrubForm2("Mike!");
	RobotomyRequestForm robotForm;
	RobotomyRequestForm robotForm2("some guy");
	PresidentialPardonForm pardonForm;
	PresidentialPardonForm pardonForm2("The president themself?");

	joey.signForm(pardonForm);
	bobby.signForm(pardonForm);
	tom.signForm(pardonForm);
	joey.executeForm(pardonForm);
	tom.executeForm(pardonForm);
	tom.executeForm(pardonForm2);
	fred.signForm(pardonForm2);
	fred.executeForm(pardonForm2);

	tom.signForm(shrubForm);
	tom.executeForm(shrubForm);
	tom.signForm(shrubForm2);
	tom.executeForm(shrubForm2);

	tom.signForm(robotForm2);
	for (int i = 0; i < 10; ++i)
		tom.executeForm(robotForm2);

	return 0;
}
