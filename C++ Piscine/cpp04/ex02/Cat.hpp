#ifndef CAT_HPP
# define CAT_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"

class Cat : public A_Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	~Cat();
	void makeSound() const;
};

#endif // CAT_HPP