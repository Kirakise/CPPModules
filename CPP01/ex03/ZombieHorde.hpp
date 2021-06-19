#ifndef ZOMBIE_HORDE
# define ZOMBIE_HORDE

# include "Zombie.hpp"

class ZombieHorde{
    Zombie *zombies;
    int    num;
    public:
    ZombieHorde(int n);
    void announce();
    ~ZombieHorde();
};

#endif