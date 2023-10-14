#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap a;
	FragTrap b("C");
	FragTrap c = FragTrap("C");
	FragTrap d(c);
	d.setName("D");
	b.setName("B");

	c.attack("B");
	c.takeDamage(9);
	for (int i = 0; i < 10; ++i)
		c.attack("A");
	c.attack("B");
	c.attack("B");
	c.takeDamage(1);
	c.beRepaired(1);
	d.takeDamage(10);
	d.beRepaired(5);
	a.highFivesGuys();
	return 0;
}