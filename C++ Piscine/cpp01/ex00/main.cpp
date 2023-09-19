# include "Zombie.hpp"

extern void randomChump(std::string name);
extern Zombie *newZombie(std::string name);

int main() {
	Zombie *zombie = newZombie("Generic zombie 1");
	randomChump("Generic zombie 2");
	zombie->announce();
	delete zombie;
	return 0;
}