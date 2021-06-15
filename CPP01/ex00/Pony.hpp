#ifndef PONY_H
# define PONY_H
# include <string>
# include <iostream>

class Pony{
	std::string name;

	public:
	Pony(std::string name);
	~Pony(void);
	void dosmth(void);
	void saysmth(void);
};

#endif