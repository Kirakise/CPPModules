#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    const std::string name;
    bool sign;
    const int reqSign;
    const int reqExec;
    public:
    Form(std::string name, int s, int e);
    ~Form();
    std::string getName() const;
    int getReqSign() const;
    int getReqExec() const;
    bool isSigned() const;

    void beSigned(Bureaucrat const &);


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