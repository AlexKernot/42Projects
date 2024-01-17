#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.h"

class PresidentialPardonForm : public AForm {
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();

	void run() const;
};

#endif // PRESIDENTIALPARDONFORM_HPP
