#pragma once
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
        public:
        Intern();
        ~Intern();
        Form *makeForm(std::string formname, std::string target);
        class FormDoesNotExistException: public std::exception {
		    virtual const char* what() const throw();
	    };
};