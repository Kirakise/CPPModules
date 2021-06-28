#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
    const std::string target;

    public:
    ShrubberyCreationForm(std::string const target);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const &) const;
};