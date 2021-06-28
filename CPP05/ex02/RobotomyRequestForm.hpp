#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form{
    const std::string target;
    public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    void execute(Bureaucrat const &b) const;
};