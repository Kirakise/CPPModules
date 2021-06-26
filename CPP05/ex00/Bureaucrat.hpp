#pragma once
#include <string>
#include <iostream>

class Bureaucrat{
    std::string const name;
    int grade;
    public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat &operator=(const Bureaucrat& op);
    virtual ~Bureaucrat();
    void UpGrade();
    void DownGrade();
    std::string getName() const;
    std::string getGrad() const;
    class GradeTooHighExp : public std::exception
    {
        public:
            GradeTooHighException () throw();
            virtual ~GradeTooHighExp() throw();
    };
    class GradeTooLowExp : public std::exception
    {
        public:
        GradeTooLowException () throw();
		virtual ~GradeTooLowException() throw();
    };
}

std::ostream &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);