#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <random>
#include <iostream>
#include <string>

class Zombie{
	std::string name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	Zombie *newZombie(std::string name);
	static void	RandomChump(int len);
	void announce(void);
	void randname(int length);
	void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif