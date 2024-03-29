#include "A_Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const A_Animal* j = new Dog();
	const A_Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;

	return 0;
}