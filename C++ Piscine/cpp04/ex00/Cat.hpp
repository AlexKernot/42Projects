#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	~Cat();
	void makeSound();
};

#endif // CAT_HPP