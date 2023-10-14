#include "ClapTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("C");
	ClapTrap c = ClapTrap("C");
	ClapTrap d(c);
	d.setName("D");
	b.setName("B");

	c.attack("B");
	c.takeDamage(9);
	for (int i = 0; i < 10; ++i)
		c.beRepaired(1);
	c.attack("B");
	c.attack("B");
	c.takeDamage(1);
	c.beRepaired(1);
	d.takeDamage(10);
	d.beRepaired(5);
	return 0;
}