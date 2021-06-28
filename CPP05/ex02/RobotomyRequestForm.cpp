#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target){}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat  const &b) const{
    int a = rand();
    if (!this->sign)
        throw Form::FormNotSigned();
    else if (this->getReqExec() < b.getGrade())
        throw Form::GradeTooLowExp();
    std::cout << b.getName() << " executes " << this->getName() << std::endl;
    if (a % 2)
        std::cout << this->target << " was robotomized" << std::endl;
    else
        std::cout << this->target << " has died during robotomization" << std::endl;
}
