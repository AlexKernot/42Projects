#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class A_Animal {
protected:
	std::string type;
public:
	A_Animal();
	A_Animal(const A_Animal&);
	A_Animal(std::string type);
	A_Animal& operator=(const A_Animal&);
	virtual ~A_Animal();
	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif // ANIMAL_HPP