#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include <exception>

class Form;

class Bureaucrat {
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;

	int operator--();
	int operator--(int);
	int operator++();
	int	operator++(int);

	void signForm(Form&);

	friend std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

#endif // BUREAUCRAT_H
