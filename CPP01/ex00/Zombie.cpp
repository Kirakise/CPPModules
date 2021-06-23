#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> " << " is ded..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> " << "Braaaaaaains\n"; 
}

Zombie *Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}

void	Zombie::RandomChump(int len)
{
	std::string s;
	Zombie *z;
	for (int i = 0; i < len; i++)
		s.append(1, (char)(std::rand()% 25 + 97));
	z = new Zombie(s);
	z->announce();
	delete z;
}

void Zombie::randname(int len)
{
	std::string s;
	for (int i = 0; i < len; i++)
		s.append(1, (char)(std::rand()% 25 + 97));
	this->name = s;
}