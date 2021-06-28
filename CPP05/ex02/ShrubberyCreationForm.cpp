#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137), target(target){
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const{
    std::fstream fs;
    if (!this->sign)
        throw Form::FormNotSigned();
    else if (this->reqExec < b.getGrade())
        throw Form::GradeTooLowExp();
    else
    {
        std::cout << b.getName() << " executes " << this->getName() << std::endl;
        fs.open(this->target + "_shrubbery", std::fstream::out);

        fs << "       _-_\n    /~~   ~~\\\n  /~~         ~~\\\n{               } \n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\";
      fs.close();
    }
}
