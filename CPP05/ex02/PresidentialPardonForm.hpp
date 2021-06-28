#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form{
    std::string const target;

    public:
    PresidentialPardonForm(std::string const target);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const &b) const;
};