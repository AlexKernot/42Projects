#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.h"

#include <iostream>
#include <exception>

int main()
{
	Bureaucrat tom("Tom", 1);
	Bureaucrat fred("Fred", 2);
	Bureaucrat bobby("Bobby", 150);
	Bureaucrat nobody;

	Intern joeyWasFired;
	AForm *form = joeyWasFired.makeForm("PresidentialPardonForm", "Joey");
	tom.signForm(*form);
	tom.executeForm(*form);
	delete form;

	form = joeyWasFired.makeForm("RobotomyRequestForm", "Tom");
	fred.signForm(*form);
	fred.executeForm(*form);
	tom = nobody;
	++fred;
	delete form;

	form = joeyWasFired.makeForm("ShrubberyCreationForm", "The world");
	fred.signForm(*form);
	fred.executeForm(*form);
	delete form;

	form = joeyWasFired.makeForm("Make Joey President", "himself");
	form = joeyWasFired.makeForm("Bring down the government", "himself");
	form = joeyWasFired.makeForm("I'm resigning", "Joey");

	return 0;
}
