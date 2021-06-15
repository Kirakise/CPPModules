#include <random>
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent{
	std::string type;

	public:
	ZombieEvent();
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *RandomChump(int length);
};