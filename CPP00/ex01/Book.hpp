#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	static std::string names[11];
	std::string info[11];

	public:
	std::string getitem(int type);
	void setitem(int type, std::string val);
	std::string getname(int type);
	std::string format(int type);
	std::string display();
};

class Book{
    Contact	contacts[8];
    static int	taken;

	public:
	void Add_Contact();
	void Display();
	void Search();		   
};