#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap();
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	~ScavTrap();

	void guardGate();
	void attack(const std::string& target);
};

#endif // SCAVTRAP_HPP