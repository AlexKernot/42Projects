#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.h"
# include "AMateria.h"

class Character : public ICharacter {
private:
	AMateria* inventory[4];
	Character();
	Character(const Character&);
	Character& operator=(const Character&);
	~Character();
};

#endif // CHARACTER_H