#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm()
	: name("None"),
	signGrade(0),
	executeGrade(0),
	isSigned(false)
	{	}

AForm::AForm(const std::string _name, const int _signGrade,
	const int _executeGrade)
	: name(_name),
	signGrade(_signGrade),
	executeGrade(_executeGrade),
	isSigned(false)
	{
		if (_signGrade > 150)
			throw GradeTooLowException();
		if (_signGrade < 1)
			throw GradeTooHighException();
		if (_executeGrade > 150)
			throw GradeTooLowException();
		if (_executeGrade < 1)
			throw GradeTooHighException();
	}

AForm::AForm(const AForm& copy)
	: name(copy.name),
	signGrade(copy.signGrade),
	executeGrade(copy.executeGrade),
	isSigned(copy.isSigned) {	}

AForm& AForm::operator=(const AForm& copy)
{
	if (this == &copy)
		return *this;
	// ! *VOMIT-EMOJI*
	const_cast<std::string&>(name) = copy.name;
	const_cast<int&>(signGrade) = copy.signGrade;
	const_cast<int&>(executeGrade) = copy.executeGrade;
	isSigned = copy.isSigned;
	return *this;
}

AForm::~AForm() {	}

std::string AForm::getName() const
{
	return name;
}

int AForm::getSignGrade() const
{
	return signGrade;
}

int AForm::getExecuteGrade() const
{
	return executeGrade;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

std::ostream& operator<<(std::ostream& out, AForm& form)
{
	out << "Name:         " << form.name << "\n"
	<< "SignGrade:    " << form.signGrade << "\n"
	<< "ExecuteGrade: " << form.executeGrade << "\n"
	<< "IsSigned:     " << std::boolalpha << form.isSigned;
	return out;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "the form grade is too low";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "the form grade too is high";
}
