#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Pardon", 25, 5)
{
	this->target = "Nobody";
}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Pardon", 25, 5)
{
	this->target = target;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy)
{
	this->target = copy.target;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	this->target = copy.target;
	return *this;
}


PresidentialPardonForm::~PresidentialPardonForm() {	}

void PresidentialPardonForm::run() const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

