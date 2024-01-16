#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.h"

# include <string>
# include <iostream>
# include <exception>

class AForm {
private:
	const std::string name;
	const int signGrade;
	const int executeGrade;
	bool isSigned;

public:
	AForm();
	AForm(const std::string, const int, const int);
	AForm(const AForm&);
	AForm& operator=(const AForm&);
	~AForm();

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat&);	

	friend std::ostream& operator<<(std::ostream&, AForm&);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

#endif // FORM_H
