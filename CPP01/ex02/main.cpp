#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent type1;
	ZombieEvent type2;
	Zombie *type1arr[10];
	Zombie *type2arr[10];

	std::srand(std::time(NULL));
	type1.setZombieType("type1");
	type2.setZombieType("type2");
	for (int i = 0; i < 10; i++)
		type1arr[i] = type1.RandomChump(10);
	for (int i = 0; i < 10; i++)
		type2arr[i] = type2.RandomChump(10);
	for (int i = 0; i < 10; i++)
	{
		delete type2arr[i];
		delete type1arr[i];
	}
}