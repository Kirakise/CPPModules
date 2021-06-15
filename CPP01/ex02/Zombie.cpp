#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ") " << "Braaaaaaains>\n"; 
}

void Zombie::randname(int len)
{
	std::srand(std::time(NULL));
	std::string s;
	for (int i = 0; i < len; i++)
		s.append(1, (char)(std::rand()% 25 + 97));
	this->name = s;
}