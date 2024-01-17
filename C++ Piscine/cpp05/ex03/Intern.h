#ifndef INTERN_H
# define INTERN_H

# include "AForm.h"

class Intern {
private:
	static AForm *makeShrub(std::string target);
	static AForm *makeRobot(std::string target);
	static AForm *makePardon(std::string target);
public:
	Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& copy);
	~Intern();
	AForm *makeForm(std::string type, std::string target);
};

#endif // INTERN_H
