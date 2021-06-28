#include "Intern.hpp"


Intern::Intern() {}

Intern::~Intern() {}

Form *Intern::makeForm(std::string formname, std::string target) {
    std::string tmp[3] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    Form *(*ptrfunc[3])(std::string) = { ShrubberyCreationForm::getForm, RobotomyRequestForm::getForm, PresidentialPardonForm::getForm};
    for (int i = 0; i < 3; i++)
    {
        if (tmp[i] == formname)
            return ptrfunc[i](target);
    }
    throw Intern::FormDoesNotExistException();
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "InternException: Form does not exist";
}