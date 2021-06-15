#include "Book.hpp"

int main()
{
	Book book;
	std::string s;

	while(true)
	{
		std::cout << ">";
		std::cin >> s;
		if (!s.compare("ADD"))
			book.Add_Contact();
		else if (!s.compare("SEARCH"))
			book.Display();
		else if (!s.compare("EXIT"))
			return (0);
	}
}
