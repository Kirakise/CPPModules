#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <random>
#include <iostream>
#include <string>

class Zombie{
	std::string name;
	std::string type;

	public:
	Zombie();
	Zombie(std::string name, std::string type);
	void announce(void);
	void randname(int length);
};

#endif