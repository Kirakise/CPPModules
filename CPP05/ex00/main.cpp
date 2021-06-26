# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* bureaucrat = new Bureaucrat("Bob", 2);
    Bureaucrat* stagiaire = new Bureaucrat("Cafe", 149);

    try
    {
        std::cout << *bureaucrat;
        bureaucrat->upGrade();
        std::cout << bureaucrat->getName() << " upgraded ! Felicitations! " << std::endl;
        std::cout << *bureaucrat;
        bureaucrat->upGrade();
        std::cerr << "[+][1] Exception does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr <<  e.GradeTooHigh() << std::endl;
    }

    // Test ++
    try
    {
        std::cout << *stagiaire;
        stagiaire->downGrade();
        std::cout << *stagiaire;
        stagiaire->downGrade();
        std::cerr << "Exception does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr <<  e.GradeTooLow() << std::endl;
    }

    Bureaucrat* toHigh;
    Bureaucrat* toLow;

    // Test ToHigh
    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "Exception does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }
    
    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << "Exception does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }
    
    delete bureaucrat;
    delete stagiaire;
}