#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    int tmp;

    if (n <= 0)
    {
        std::cout << "Error: Invalid zombie count\n";
        this->num = n;
        return ;
    }
    this->zombies = new Zombie[n];
    this->num = n;
    for (int i = 0; i < n; i++)
        this->zombies[i].randname(5);
}

void ZombieHorde::announce()
{
    if (this->num < 1)
        return ;
    for (int i = 0; i < this->num; i++)
        this->zombies[i].announce();
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->zombies;
}