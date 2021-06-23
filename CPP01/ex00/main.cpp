#include "Zombie.hpp"

int main()
{
	Zombie type1arr[10];

	std::srand(std::time(NULL));
	for (int i = 0; i < 10; i++)
	{
		type1arr[i].randname(5);
		type1arr[i].announce();
	}
	std::cout << "Here comes random chump!" << std::endl;
	Zombie::RandomChump(5);
}