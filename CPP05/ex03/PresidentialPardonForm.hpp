#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form{
    std::string const target;

    public:
    static Form *getForm(std::string target);
    PresidentialPardonForm(std::string const target);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const &b) const;
};