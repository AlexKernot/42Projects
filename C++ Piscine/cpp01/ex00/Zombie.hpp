#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string _name);
	void announce(void);
	~Zombie();
};

#endif // ZOMBIE_HPP