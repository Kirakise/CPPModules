#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    protected:
    const std::string name;
    bool sign;
    const int reqSign;
    const int reqExec;
    public:
    Form(std::string name, int s, int e);
    virtual ~Form();
    std::string getName() const;
    int getReqSign() const;
    int getReqExec() const;
    bool isSigned() const;

    void beSigned(Bureaucrat const &);
    virtual void execute(Bureaucrat const &form) const = 0;

    class FormNotSigned : public std::exception{
        public:
        FormNotSigned() throw();
        virtual ~FormNotSigned() throw();
        const char * what() const throw();
    };
    class GradeTooHighExp : public std::exception{
        public:
        GradeTooHighExp() throw();
        virtual ~GradeTooHighExp() throw();
        const char * what() const throw();
    };
    class GradeTooLowExp : public std::exception{
        public:
        GradeTooLowExp() throw();
        const char * what() const throw();
		virtual ~GradeTooLowExp() throw();
    };
};

std::ostream &operator<<(std::ostream & out, const Form & form);