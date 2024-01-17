#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.h"

class ShrubberyCreationForm : public AForm {
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	~ShrubberyCreationForm();

	void run() const;
};

#endif // SHRUBBERYCREATIONFORM_H
