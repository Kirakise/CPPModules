#include "Form.hpp"

Form::Form(std::string name, int s, int e) : name(name), sign(false), reqSign(s), reqExec(e) {
    if (this->reqSign > 150 || this->reqExec > 150)
        throw Form::GradeTooLowExp();
    else if (this->reqExec < 1 || this->reqSign < 1)
        throw Form::GradeTooHighExp();
};

std::string Form::getName() const{
    return this->name;
}

Form::~Form(){}

int Form::getReqSign() const{
    return this->reqSign;
}

int Form::getReqExec() const{
    return this->reqExec;
}

bool Form::isSigned() const{
    return this->sign;
}

void Form::beSigned(Bureaucrat const &b) {
    if (this->reqSign < b.getGrade())
        throw Form::GradeTooLowExp();
    else
        this->sign = true;
}

Form::GradeTooHighExp::GradeTooHighExp() throw() {}

Form::GradeTooHighExp::~GradeTooHighExp() throw() {}

const char *Form::GradeTooHighExp::what() const throw() {
    return "Grade too high!";
}

Form::GradeTooLowExp::GradeTooLowExp() throw() {}

Form::GradeTooLowExp::~GradeTooLowExp() throw() {}

const char *Form::GradeTooLowExp::what() const throw() {
    return "Grade too low!";
}

Form::FormNotSigned::FormNotSigned() throw() {}
Form::FormNotSigned::~FormNotSigned() throw() {}
const char *Form::FormNotSigned::what() const throw() {
    return "Form Is not signed!";
}

std::ostream &operator<< (std::ostream &out, const Form &form)
{
    std::string s;

    if (form.isSigned())
        s = "signed";
    else
        s = "not signed";
    out << "The form " << form.getName() << " is " << s << " grade to sign: " << form.getReqSign() 
    << " and to execute: " << form.getReqExec() << std::endl;
    return out;
}
