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
    void upGrade();
    void downGrade();
    std::string getName() const;
    int getGrade() const;
    class GradeTooHighExp : public std::exception
    {
        public:
            GradeTooHighExp() throw();
            virtual ~GradeTooHighExp() throw();
            const char * what() const throw();
    };
    class GradeTooLowExp : public std::exception
    {
        public:
        GradeTooLowExp() throw();
        const char * what() const throw();
		virtual ~GradeTooLowExp() throw();
    };
};

std::ostream &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);