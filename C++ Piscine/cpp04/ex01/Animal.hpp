#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal&);
	Animal(std::string type);
	Animal& operator=(const Animal&);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};

#endif // ANIMAL_HPP