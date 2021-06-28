# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* bureaucrat = new Bureaucrat("Bob", 2);
    Bureaucrat* stagiaire = new Bureaucrat("Cafe", 149);

    try
    {
        std::cout << *bureaucrat;
        bureaucrat->upGrade();
        std::cout << *bureaucrat;
        bureaucrat->upGrade();
        std::cerr << "Exp does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr <<  e.what() << std::endl;
    }

    // Test ++
    try
    {
        std::cout << *stagiaire;
        stagiaire->downGrade();
        std::cout << *stagiaire;
        stagiaire->downGrade();
        std::cerr << "Exp does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr <<  e.what() << std::endl;
    }

    Bureaucrat* toHigh;
    Bureaucrat* toLow;

    // Test ToHigh
    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "Exp does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << "Exp does'nt work nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete bureaucrat;
    delete stagiaire;
}