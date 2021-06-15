#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie *ZombieEvent::RandomChump(int len)
{
	std::string s;
	Zombie *z;
	for (int i = 0; i < len; i++)
		s.append(1, (char)(std::rand()% 25 + 97));
	z = newZombie(s);
	z->announce();
	return z;
}