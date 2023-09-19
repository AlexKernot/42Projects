#include "Zombie.hpp"

extern Zombie *zombieHoard(int N, std::string name);

int main() {
	static const int numberOfZombies = 5;
	Zombie *zombies = zombieHoard(numberOfZombies, "generic zombie");
	for (int i = 0; i < numberOfZombies; ++i) {
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;
}