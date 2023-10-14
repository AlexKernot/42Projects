#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap a;
	ScavTrap b("C");
	ScavTrap c = ScavTrap("C");
	ScavTrap d(c);
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
	a.guardGate();
	return 0;
}