#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (this->grade <= 0)
        throw Bureaucrat::GradeTooHighExp();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowExp();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) 
{
	if (copy.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighExp();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowExp();
	this->grade = copy.getGrade();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	this->grade = op.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void) const { 
    return (this->name);
}
int Bureaucrat::getGrade(void) const {
    return (this->grade);
}

void Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
}

void Bureaucrat::upGrade(void)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighExp();
	else
		this->grade--;
}

void				Bureaucrat::downGrade(void)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowExp();
	else
		this->grade++;
}

Bureaucrat::GradeTooHighExp::GradeTooHighExp() throw() {}

Bureaucrat::GradeTooHighExp::~GradeTooHighExp() throw() {}

const char * Bureaucrat::GradeTooHighExp::what() const throw() {return "Grade too high";}

Bureaucrat::GradeTooLowExp::GradeTooLowExp() throw() {}

Bureaucrat::GradeTooLowExp::~GradeTooLowExp() throw() {}

const char * Bureaucrat::GradeTooLowExp::what() const throw() {return "Grade too low";}


std::ostream &operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}