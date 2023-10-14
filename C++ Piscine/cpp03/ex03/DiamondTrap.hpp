#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(const std::string&);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator=(const DiamondTrap&);
	~DiamondTrap();

	void attack(const std::string&);
	void whoAmI();
};

#endif // DIAMONTRAP_HPP