#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << "Pony " << this->name << " was created\n";
}

Pony::~Pony(void)
{
	std::cout << this->name << " is now dead\n";
}

void Pony::dosmth(void)
{
	std::cout << this->name << " is doing pony things, you know...\n";
}

void Pony::saysmth(void)
{
	std::cout << this->name << " is saying that it's not a warcrime if it was SO DAMN FUN\n";
}

void ponyOnTheStack(void)
{
	Pony Stack("Big stack floppa");
	Stack.dosmth();
	Stack.saysmth();
}

void ponyOnTheHeap(void)
{
	Pony *Heap = new Pony("Big heap floppa");
	Heap->dosmth();
	Heap->saysmth();
	delete Heap;
}

int main()
{
	std::cout << "Pony on stack:";
	ponyOnTheStack();
	std::cout << "Pony on heap:";
	ponyOnTheHeap();
	return (0);
}