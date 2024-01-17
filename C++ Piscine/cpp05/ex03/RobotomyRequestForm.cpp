#include "RobotomyRequestForm.hpp"

#include <time.h>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomize", 72, 46)
{
	target = "nobody";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomize", 72, 46)
{
	this->target = target;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	this->target = copy.target;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	this->target = copy.target;
	return *this;
}


RobotomyRequestForm::~RobotomyRequestForm() {	}


void RobotomyRequestForm::run() const
{
	static int init = 0;
	if (init == 0)
	{
		srand(time(NULL));
		init = 1;
	}
	bool success = rand() % 2;
	std::cout << "* Distant drilling noises *" << std::endl;
	if (success == true)
		std::cout << target << "'s robotomy was a success" << std::endl;
	else
		std::cout << target << "'s robotomy has failed :(" << std::endl;
}

