#include "Book.hpp"

std::string Contact::names[11]={
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal code",
	"Email",
	"Phone number",
	"Birthday date",
	"Favorite meal",
	"Favorite color",
	"Darkest Secret"
};

std::string Contact::getitem(int type)
{
	return this->info[type];
}

void Contact::setitem(int type, std::string val)
{
	this->info[type] = val;
}

std::string Contact::getname(int type)
{
	return this->names[type];
}

std::string Contact::format(int type)
{
	std::string s;
	if (this->info[type].length() > 10)
	{
		s.append(this->info[type], 9);
		s.append(".", 1);
	}
	else
		s = this->info[type];
	return s;
}

int Book::taken = 0;

void Book::Add_Contact()
{
	if (this->taken > 7)
	{
		std::cout << "No space left!";
		return ;
	}
	for (int i = 0; i < 11; i++)
	{
		std::string s;

		std::cout << "Enter " << this->contacts[this->taken].getname(i) << " \n";
		std::cin >> s;
		this->contacts[this->taken].setitem(i, s); 
	}
	this->taken++;
}

void Book::Display()
{
	int index;

	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < this->taken; i++)
	{
		std::cout << '|';
		std::cout << std::setfill(' ') << std::setw(10) << i << '|';
		std::cout << std::setfill(' ') << std::setw(10) << this->contacts->format(0) << '|';
		std::cout << std::setfill(' ') << std::setw(10) << this->contacts->format(1) << '|';
		std::cout << std::setfill(' ') << std::setw(10) << this->contacts->format(2) << "|\n";
	}
	std::cout << "Enter index for full\n>";
	std::cin >> index;
	if (index > this->taken)
	{
		std::cout << "Wrong index!\n";
		return ;
	}
	for (int i = 0; i < 11; i++)
		std::cout << this->contacts->getname(i) << ": " << this->contacts->getitem(i) << "\n";
}