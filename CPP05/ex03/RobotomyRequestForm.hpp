#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form{
    const std::string target;
    public:
    static Form *getForm(std::string target);
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    void execute(Bureaucrat const &b) const;
};