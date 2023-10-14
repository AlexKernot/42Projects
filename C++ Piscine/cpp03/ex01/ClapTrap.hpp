#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();

	std::string getName() const;
	void setName(const std::string);
	int getHitPoints() const;
	void setHitPoints(const int);
	int getEnergyPoints() const;
	void setEnergyPoints(const int);
	int getAttackDamage() const;
	void setAttackDamage(const int);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP