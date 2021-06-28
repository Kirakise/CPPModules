#include "PresidentialPardonForm.hpp"


Form *PresidentialPardonForm::getForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5), target(target){
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &b) const {
    if (!this->sign)
        throw Form::FormNotSigned();
    else if (b.getGrade() > this->reqExec)
        throw Form::GradeTooLowExp();
    else
        std::cout << b.getName() << " executes " << this->getName() << std::endl << this->target << "  has been pardoned by Zafod Beeblebrox" << std::endl;
}
