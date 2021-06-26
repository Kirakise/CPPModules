#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grage < 0)
        throw Bureaucrat::GradeTooHighExp();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowExp();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) 
{
	if (copy.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->name = copy.getName();
	this->grade = copy.getGrade();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	this->name = op.getName();
	this->grade = op.getGrade();
	return (*this);
}

const std::string & Bureaucrat::getName(void) const { 
    return (this->name);
}
int Bureaucrat::getGrade(void) const {
    return (this->grade);
}

void Bureaucrat::upGrade(void)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void				Bureaucrat::downGrade(void)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {
    std::cerr << "Exception: Grade too high!" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {
    std::cerr << "Exception: Grade too high!" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}


std::ostream &operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}