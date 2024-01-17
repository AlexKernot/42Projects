#include "ShrubberyCreationForm.h"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
	target = "None";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery", 145, 137)
{
	this->target = target;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
	*this = copy;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	this->target = copy.target;
	return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {	}


void ShrubberyCreationForm::run() const
{
	const std::string tree[9] = {
	"       _-_",
	"    /~~   ~~\\",
	" /~~         ~~\\",
	"{               }",
	" \\  _-     -_  /",
	"   ~  \\ //  ~",
	"_- -   | | _- _",
	"  _ -  | |   -_",
	"      // \\ "};
	std::string path = target + "_shrubbery";
	std::fstream file(path.c_str(), std::ios_base::out);
	for (int i = 0; i < 9; ++i)
		file << tree[i] << "\n";
	file << std::endl;
	file.close();
}

