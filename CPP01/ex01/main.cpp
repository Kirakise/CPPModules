#include "Zombie.hpp"

int main()
{
    std::srand(std::time(NULL));
    Zombie *z;
    z = zombieHorde(10, "Carl");
    for (int i = 0; i < 10; i++)
    {
        z[i].announce();
    }
    delete [] z;
}