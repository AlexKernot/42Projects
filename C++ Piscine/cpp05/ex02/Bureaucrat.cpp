#include "Bureaucrat.h"
#include "AForm.h"

Bureaucrat::Bureaucrat() : name("none")
{
	grade = 75;
}

Bureaucrat::Bureaucrat(const std::string aName, const int aGrade) : name(aName)
{
	if (aGrade > 150)
		throw GradeTooLowException();
	if (aGrade < 1)
		throw GradeTooHighException();
	this->grade = aGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	this->grade = copy.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this == &copy)
		return *this;
	const_cast<std::string&>(this->name) = const_cast<std::string&>(copy.name);
	this->grade = copy.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {  }

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

int Bureaucrat::operator--()
{
	if (this->grade + 1 > 150)
		throw GradeTooHighException();
	this->grade += 1;
	return this->grade;
}


int Bureaucrat::operator--(int)
{
	int old = this->grade;
	operator--();
	return old;
}


int Bureaucrat::operator++()
{
	if (this->grade - 1 < 1)
		throw GradeTooLowException();
	this->grade -= 1;
	return this->grade;
}


int	Bureaucrat::operator++(int)
{
	int old = this->grade;
	operator++();
	return old;
}

void Bureaucrat::signForm(AForm& form)
{
	if (form.getIsSigned() == true) {
		std::cout << name << " couldn't sign form because it is already signed" << std::endl;
		return ;
	}
	try {
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	} catch (std::exception& exe) {
		std::cout << name << " couldn't sign " << form.getName() << " because " << exe.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const& form)
{
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} catch (std::exception& exe) {
		std::cout << name << " couldn't execute " << form.getName() << " because " << exe.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat)
{
	out << bureaucrat.name << ", bureaucrat grade " << bureaucrat.grade;
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucraft grade above 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade below 150";
}
