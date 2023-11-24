#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>

# include "ICharacter.h"

class AMateria {
private:
	std::string type;
public:
	AMateria(const std::string& type);
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	~AMateria();

	const std::string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif // AMATERIA_H