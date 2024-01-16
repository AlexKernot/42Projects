#include "Bureaucrat.h"
#include "AForm.h"

#include <iostream>
#include <exception>

int main()
{
	Bureaucrat tom("Tom", 1);
	Bureaucrat fred("Fred", 2);
	Bureaucrat joey("Joey", 75);
	Bureaucrat bobby("Bobby", 150);
	Bureaucrat nobody;

	AForm somethingSilly("some silly rule to pass", 50, 25);
	try {
		AForm tooSillyTooSoon("the person who made this should be fired", 0, 0);
	} catch (std::exception& e) {
		std::cout << "exception thrown (too silly): " << e.what() << std::endl;
	}
	try {
		AForm Goose("for the serious goose convention", 151, 151);
	} catch (std::exception& e) {
		std::cout << "exception thrown (not silly enough): " << e.what() << std::endl;
	}
	AForm theSilliest("the silliest form, for the silliest person", 1, 1);
	std::cout << "\ndetails:\n" << somethingSilly << "\n\n";
	std::cout << "\ndetails:\n" << theSilliest << "\n\n";
	AForm forgedDocument(somethingSilly);
	joey.signForm(forgedDocument);
	joey.signForm(theSilliest);
	fred.signForm(somethingSilly);
	forgedDocument = theSilliest;
	fred.signForm(forgedDocument);
	tom.signForm(somethingSilly);
	tom.signForm(theSilliest);
	std::cout << "\ndetails:\n" << somethingSilly << "\n\n";
	return 0;
}
