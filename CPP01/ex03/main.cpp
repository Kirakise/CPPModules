#include "ZombieHorde.hpp"

int main()
{
    std::srand(std::time(NULL));
    ZombieHorde horde(5);
    horde.announce();
}